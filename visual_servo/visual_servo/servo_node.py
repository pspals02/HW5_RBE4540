"""Run a fixed-pose pick-and-place while passively receiving camera data."""

import math
import threading
import time
import numpy as np
import rclpy
from builtin_interfaces.msg import Duration
from common_interfaces_merlab.srv import SendJointTrajectoryPoint
from common_interfaces_merlab.srv import SendTwist, SendPose

from common_interfaces_merlab.srv import SendPose
from geometry_msgs.msg import Pose
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
from sensor_msgs.msg import PointCloud2
from std_msgs.msg import Float64MultiArray
from std_srvs.srv import Trigger
from cv_bridge import CvBridge
import cv2


class VisualServo(Node):
    """Execute a parameterized demo without using perception for motion."""

    def __init__(self):
        """Create motion clients, sensor inputs, and the run service."""
        super().__init__("visual_servo")
        self.callback_group = ReentrantCallbackGroup()
        self.run_lock = threading.Lock()

        self.declare_parameter("image_topic", "/palm_camera/image")
        
        self.declare_parameter("cartesian_service", "/cartesian_ref")
        self.declare_parameter("joint_service", "/move_traj_single_point")
        self.declare_parameter(
            "gripper_command_topic",
            "/forward_position_controller_gripper/commands",
        )
        self.declare_parameter("run_service", "/run_hover")
        self.declare_parameter("auto_start", True)
        self.declare_parameter("start_delay_sec", 2.0)
        self.declare_parameter("service_timeout_sec", 90.0)
        self.declare_parameter("motion_timeout_sec", 45.0)
        self.declare_parameter(
            "home_joint_positions",
            [-3.14, -1.67, -0.55, -1.39, 1.39, 0.70],
        )
        self.declare_parameter("home_move_time_sec", 5.0)
        self.declare_parameter("pick_x", 0.2)
        self.declare_parameter("pick_y", 0.42)
        self.declare_parameter("pick_z", 0.63)
        
        self.curr_yellow_center=[0.0,0.0]
        self.curr_blue_center=[0.0,0.0]
        self.curr_teal_center=[0.0,0.0]
        self.curr_green_center=[0.0,0.0]
        
        self.des_blue_center=[270.0,288.0]
        self.des_yellow_center=[368.0,190.0]
        self.des_teal_center=[370.0,290.0]
        self.des_green_center=[272.0,192.0]
        
        self.declare_parameter("hover_height", 0.10)
        self.declare_parameter("lift_height", 0.20)
        self.declare_parameter("tool_qx", 1.0)
        self.declare_parameter("tool_qy", 0.0)
        self.declare_parameter("tool_qz", 0.0)
        self.declare_parameter("tool_qw", 0.0)
        self.declare_parameter("gripper_open_position", 0.00)
        self.declare_parameter("gripper_closed_position", 0.70)
        self.declare_parameter("gripper_wait_sec", 2.0)

        self.image_topic = self.get_parameter("image_topic").value
        self.br = CvBridge()
        

        self.service_timeout_sec = float(
            self.get_parameter("service_timeout_sec").value
        )
        self.motion_timeout_sec = float(
            self.get_parameter("motion_timeout_sec").value
        )
        self.home_joint_positions = list(
            self.get_parameter("home_joint_positions").value
        )
        self.home_move_time_sec = float(
            self.get_parameter("home_move_time_sec").value
        )
        self.pick_position = self._position_parameters("pick")
        self.hover_height = float(self.get_parameter("hover_height").value)
        self.lift_height = float(self.get_parameter("lift_height").value)
        self.tool_orientation = self._normalized_tool_orientation()
        self.gripper_open_position = float(
            self.get_parameter("gripper_open_position").value
        )
        self.gripper_closed_position = float(
            self.get_parameter("gripper_closed_position").value
        )
        self.gripper_wait_sec = float(
            self.get_parameter("gripper_wait_sec").value
        )
        self._validate_parameters()

        self.latest_image = None
        self.image_count = 0
        self.cam_cent_x = 320
        self.cam_cent_y = 240
        self.focal=3.2  #mm
        self.img_depth=0.5
        self.pix_size=0.01 #mm
        self.err_decay = 0.2
<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py

        self.curr_feats = np.concatenate([
            self.curr_teal_center, self.curr_green_center,
            self.curr_blue_center, self.curr_yellow_center
        ]).reshape(8, 1)
        self.log_feats = []
        self.gain = 0.2
        self.max_lin = 0.05     # m/s
        self.max_ang = 0.2      # rad/s
        self.des_feats = np.concatenate([   #moved here for visu servo
            self._image_to_cam(self.des_teal_center),
            self._image_to_cam(self.des_green_center),
            self._image_to_cam(self.des_blue_center),
            self._image_to_cam(self.des_yellow_center),
        ]).reshape(8, 1)

        self.frame_id = 0
=======
>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py

        self.image_sub = self.create_subscription(
            Image,
            self.image_topic,
            self._image_callback,
            qos_profile_sensor_data,
            callback_group=self.callback_group,
        )
        
        self.ee_velocity_client = self.create_client(SendTwist, '/set_ee_velocity')
        gripper_topic = self.get_parameter("gripper_command_topic").value
        self.gripper_pub = self.create_publisher(
            Float64MultiArray,
            gripper_topic,
            10,
        )
        self.cartesian_client = self.create_client(
            SendPose,
            self.get_parameter("cartesian_service").value,
            callback_group=self.callback_group,
        )
        self.joint_client = self.create_client(
            SendJointTrajectoryPoint,
            self.get_parameter("joint_service").value,
            callback_group=self.callback_group,
        )
        self.run_service = self.create_service(
            Trigger,
            self.get_parameter("run_service").value,
            self._run_service_callback,
            callback_group=self.callback_group,
        )

        self.auto_start_timer = None
        if self.get_parameter("auto_start").value:
            start_delay_sec = max(
                0.1,
                float(self.get_parameter("start_delay_sec").value),
            )
            self.auto_start_timer = self.create_timer(
                start_delay_sec,
                self._auto_start_callback,
                callback_group=self.callback_group,
            )

        self.get_logger().info(
            "Fixed-pose mode is active: camera messages are cached but do not "
            "change the pick or place poses."
        )
        self.get_logger().info(
            f"Receiving Image on {self.image_topic}"
            
        )

    def _position_parameters(self, prefix):
        return tuple(
            float(self.get_parameter(f"{prefix}_{axis}").value)
            for axis in ("x", "y", "z")
        )

    def _normalized_tool_orientation(self):
        orientation = tuple(
            float(self.get_parameter(f"tool_q{axis}").value)
            for axis in ("x", "y", "z", "w")
        )
        norm = math.sqrt(sum(value * value for value in orientation))
        if norm < 1e-9:
            raise ValueError("The tool orientation quaternion cannot be zero")
        return tuple(value / norm for value in orientation)

    def _validate_parameters(self):
        if len(self.home_joint_positions) != 6:
            raise ValueError(
                "home_joint_positions must contain six joint values"
            )
        if self.hover_height <= 0.0:
            raise ValueError("hover_height must be positive")
        if self.lift_height <= 0.0:
            raise ValueError("lift_height must be positive")
    
    def _image_callback(self, message):
        self.latest_image = message
        
        if self.image_count >= 1:
            self.get_logger().info(
                f"Received first image: {message.width}x{message.height}, "
                f"encoding={message.encoding}"
            )
            cv_image = self.br.imgmsg_to_cv2(message, desired_encoding='bgr8')
            self._image_mask(cv_image)
            
            #self._hough_circ_centers(cv_image)
            
            print("Calc feature err...")
            curr_img_feats = np.concatenate([
                self.curr_teal_center,
                self.curr_green_center,
                self.curr_blue_center,
                self.curr_yellow_center
            ]).reshape(8, 1)

<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py
            '''
=======
>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py
            desired_img_feats = np.concatenate([
                self._image_to_cam(self.des_teal_center),
                self._image_to_cam(self.des_green_center),
                self._image_to_cam(self.des_blue_center),
                self._image_to_cam(self.des_yellow_center)
            ]).reshape(8, 1)

            print("curr feat:", curr_img_feats)
            
<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py
=======

>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py
            
            feat_err=curr_img_feats-desired_img_feats
            print("feature error:", feat_err)
            
            L_teal = self._image_jacob(self.curr_teal_center)
            L_green = self._image_jacob(self.curr_green_center)
            L_blue = self._image_jacob(self.curr_blue_center)
            L_yellow = self._image_jacob(self.curr_yellow_center)
            print("Obtained image JACOBS")
            L = np.vstack([
                L_teal,
                L_green,
                L_blue,
                L_yellow
            ])
<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py
            L_plus= np.linalg.pinv(L)
            vc = - self.err_decay  * L_plus * feat_err #decreasing error needs minus sign
=======
            L_plus= np.pinv(L)
            vc = self.err_decay  * L_plus * feat_err
>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py
            print("Output Velocity:", vc)
            filename = 'saved_ros2_image.png'
            cv2.imwrite(filename, cv_image)
            
            
            self.get_logger().info(f'Successfully saved image to {filename}')
            #rclpy.shutdown()
<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py
            '''
            self.frame_id += 1
 
        
    def _image_to_cam(self, point):
        s = self.pix_size * 1e-3          # m/px
        return [(point[0] - self.cam_cent_x) * s,
                (point[1] - self.cam_cent_y) * s]
    
    def _image_jacob(self, point):
        x, y = point
        f, Z = self.focal * 1e-3, self.img_depth
        return np.array([
            [-f/Z,  0,   x/Z,  x*y/f,        -(f + x**2/f),  y],
            [ 0,  -f/Z,  y/Z,  f + y**2/f,   -x*y/f,        -x],]
        )
=======
    def _image_to_cam(self, point):
        xc=((point[0]-self.cam_cent_x)*self.img_depth)/(self.focal/self.pix_size)
        yc=((point[1]-self.cam_cent_y)*self.img_depth)/(self.focal/self.pix_size)
        
        return [xc, yc]
    
    def _image_jacob(self, point):
        x = point[0]
        y = point [1]
        Z = self.img_depth
        L = np.array([
            [-1/Z, 0, x/Z, x*y, -(1+x**2), y],
            [0, -1/Z, y/Z, 1+y**2, -x*y, -x]
            ])
        return L
>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py
        
    def _image_mask(self, cv_image):
        lower_teal = np.array([150, 150, 0])
        upper_teal = np.array([255, 255, 100])

        lower_green = np.array([0, 100, 0])
        upper_green = np.array([80, 255, 80])

        lower_blue = np.array([150, 0, 0])
        upper_blue = np.array([255, 100, 100])

        lower_yellow = np.array([0, 100, 100])
        upper_yellow = np.array([50, 200, 200])
        
        
        teal_mask = cv2.inRange(cv_image, lower_teal, upper_teal)
        green_mask = cv2.inRange(cv_image, lower_green, upper_green)
        blue_mask = cv2.inRange(cv_image, lower_blue, upper_blue)
        yellow_mask = cv2.inRange(cv_image, lower_yellow, upper_yellow)
        
        teal_center = self._center_dot(teal_mask)
        green_center = self._center_dot(green_mask)
        blue_center = self._center_dot(blue_mask)
        yellow_center = self._center_dot(yellow_mask)
<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py

        if None in (teal_center, green_center, blue_center, yellow_center):
            return
=======
>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py
       
        
        mask_green = cv2.cvtColor(green_mask, cv2.COLOR_GRAY2BGR)
        mask_teal = cv2.cvtColor(teal_mask, cv2.COLOR_GRAY2BGR)
        mask_blue = cv2.cvtColor(blue_mask, cv2.COLOR_GRAY2BGR)
        mask_yellow = cv2.cvtColor(yellow_mask, cv2.COLOR_GRAY2BGR)
        
        masked_image_teal = cv_image & mask_teal
        masked_image_green = cv_image & mask_green
        masked_image_blue = cv_image & mask_blue
        masked_image_yellow = cv_image & mask_yellow
        
        if self.image_count>=1:
            
            self.curr_teal_center = self._image_to_cam(teal_center)
            self.curr_green_center = self._image_to_cam(green_center)
            self.curr_blue_center = self._image_to_cam(blue_center)
            self.curr_yellow_center = self._image_to_cam(yellow_center)
            print("Current Coordinates:")
        
        print("teal:", teal_center)
        print("Green:", green_center)
        print("Blue:", blue_center)
        print("Yellow:", yellow_center)
        
        filename_teal = 'saved_ros2_teal_image.png'
        filename_blue = 'saved_ros2_blue_image.png'
        filename_green = 'saved_ros2_green_image.png'
        filename_yellow = 'saved_ros2_yellow_image.png'
        
        cv2.imwrite(filename_teal, masked_image_teal)
        cv2.imwrite(filename_blue, masked_image_blue)
        cv2.imwrite(filename_green, masked_image_green)
        cv2.imwrite(filename_yellow, masked_image_yellow)
        
        
    def _center_dot(self,mask):

        
        y, x = np.where(mask > 0)

        if len(x) == 0:
            return None

        # Average x and y coordinates
        center_x = np.mean(x)
        center_y = np.mean(y)

        return [center_x, center_y]
        
        
    def _hough_circ_centers(self,cv_image):
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        circles = cv2.HoughCircles(
            gray,
            cv2.HOUGH_GRADIENT,
            dp=1,
            minDist=20,
            param1=100,
            param2=20,
            minRadius=5,
            maxRadius=50
        )

        result = cv_image.copy()
        if circles is not None:
            circles = np.round(circles[0, :]).astype(int)
            for x, y, r in circles:
                cv2.circle(result, (x, y), r, (255, 0, 255), 2)
                print(f"Circle center: ({x}, {y})")
        cv2.imwrite('hw4_hough_circ.png', result)
                
    def _auto_start_callback(self):
        self.auto_start_timer.cancel()
        success, message = self._try_run_demo()
        log = self.get_logger().info if success else self.get_logger().error
        log(message)

    def _run_service_callback(self, request, response):
        del request
        response.success, response.message = self._try_run_demo()
        return response

    def _try_run_demo(self):
        if not self.run_lock.acquire(blocking=False):
            return False, "A pick-and-place cycle is already running"

        try:
            if not self._wait_for_dependencies():
                return False, "Motion services did not become ready"
            if not self._execute_hover():
                return (
                    False,
                    "Pick-and-place stopped after a failed motion step",
                )
            return True, "Fixed pick-and-place cycle completed"
        finally:
            self.run_lock.release()

    def _wait_for_dependencies(self):
        dependencies = (
            (self.joint_client, "joint trajectory"),
            (self.cartesian_client, "Cartesian motion"),
        )
        for client, label in dependencies:
            self.get_logger().info(f"Waiting for the {label} service")
            if not client.wait_for_service(
                timeout_sec=self.service_timeout_sec
            ):
                self.get_logger().error(
                    f"Timed out waiting for the {label} service"
                )
                return False

        deadline = time.monotonic() + min(10.0, self.service_timeout_sec)
        while self.gripper_pub.get_subscription_count() == 0:
            if time.monotonic() >= deadline:
                self.get_logger().warn(
                    "No gripper command subscriber detected; continuing anyway"
                )
                break
            time.sleep(0.1)
        return True
     
    def move_cartesian(self, x, y, z):
        """Move tool0 to a position in base_link (meters), pointing downward."""
        request = SendPose.Request()
        request.pose.position.x = float(x)
        request.pose.position.y = float(y)
        request.pose.position.z = float(z)
        # Quaternion (x, y, z, w) = (1, 0, 0, 0).
        request.pose.orientation.x = 1.0
        request.pose.orientation.w = 0.0
        request.pose.orientation.y = 0.0
        request.pose.orientation.z = 0.0

        self.get_logger().info(f'Moving to ({x:.2f}, {y:.2f}, {z:.2f})')
        future = self.cartesian_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, timeout_sec=120.0)
        if not future.done():
            self.get_logger().error('No motion response; stopping the motion sequence')
            return False
        response = future.result()
        if response is None or not response.success:
            self.get_logger().error('Cartesian motion failed; stopping the motion sequence')
            return False
        return True
        
    def set_ee_velocity(self, vx=0.0, vy=0.0, vz=0.0,
                        wx=0.0, wy=0.0, wz=0.0):
        """Set tool-frame linear (m/s) and angular (rad/s) velocities."""
        request = SendTwist.Request()
        request.twist.linear.x = float(vx)
        request.twist.linear.y = float(vy)
        request.twist.linear.z = float(vz)
        request.twist.angular.x = float(wx)
        request.twist.angular.y = float(wy)
        request.twist.angular.z = float(wz)
        future = self.ee_velocity_client.call_async(request)
        # The first command also starts Servo through the motion interface.
        rclpy.spin_until_future_complete(self, future, timeout_sec=20.0)
        if not future.done():
            self.get_logger().error('No velocity response; stopping the motion sequence')
            return False
        response = future.result()
        if response is None or not response.success:
            message = response.message if response is not None else 'No response'
            self.get_logger().error(f'Velocity command failed: {message}')
            return False
        return True

    def move_ee_velocity(self, vx=0.0, vy=0.0, vz=0.0,
                         wx=0.0, wy=0.0, wz=0.0, duration=1.0):
        """Refresh a tool-frame velocity for duration seconds; caller stops it."""
        self.get_logger().info(
            f'Tool-frame velocity: linear=({vx}, {vy}, {vz}) m/s, '
            f'angular=({wx}, {wy}, {wz}) rad/s for {duration:.1f} s'
        )
        if not self.set_ee_velocity(vx, vy, vz, wx, wy, wz):
            return False
        end_time = time.monotonic() + duration
        while rclpy.ok():
            remaining = end_time - time.monotonic()
            if remaining <= 0.0:
                return True
            # Refresh before the interface's default 0.5-second watchdog expires.
            time.sleep(min(0.1, remaining))
            if time.monotonic() >= end_time:
                return True
            if not self.set_ee_velocity(vx, vy, vz, wx, wy, wz):
                return False
        return False
        
    def _first_move(self):
        self.get_logger().info('Waiting for /cartesian_ref...')
        while rclpy.ok():
            if self.cartesian_client.wait_for_service(timeout_sec=1.0):
                break
        if not rclpy.ok():
            return

        if not self.move_cartesian(0.2, 0.42, 0.63):
            return
        #if not self.move_cartesian(-0.45, -0.15, 0.63):
         #   return

        self.get_logger().info('Waiting for /set_ee_velocity...')
        while rclpy.ok():
            if self.ee_velocity_client.wait_for_service(timeout_sec=1.0):
                break
        if not rclpy.ok():
            return

        # Move along tool0's +X, then -X (about 9 cm each at 0.03 m/s).
        # Switch directly between velocities; send zero when the sequence ends.
        try:
            if not self.move_ee_velocity( vy=0.03, vz=0.03, wx=-0.16, wz=0.03, duration=3.0):
                return
            #if not self.move_ee_velocity( vy=0.03, vz=0.03, wy=0.008, wz=0.008, duration=3.0):
             #   return
        
        finally:
            # Also request a stop if a command fails or the user interrupts.
            # If ROS has shut down, the interface watchdog stops stale commands.
            self.image_count=1
            stopped = self.set_ee_velocity() if rclpy.ok() else False
        if not stopped:
            return
        
            
        self.get_logger().info('First Motion sequence complete')
<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py
        return True
=======
>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py
        
    def _execute_hover(self):
        self.get_logger().info(
            "Starting with fixed coordinates; received sensor counts are "
            f"images={self.image_count}"
        )
        
        #if not self._move_home():
         #   return False
<<<<<<< Updated upstream:install/hover_above/lib/python3.12/site-packages/hover_above/hover_func.py

        if not self._first_move():
            return False
        self._visual_servo()

=======
        if not self._first_move():
            return False
            
>>>>>>> Stashed changes:visual_servo/visual_servo/servo_node.py
        pick_pose = self._make_pose(self.pick_position)
        #init_hover = self._make_pose(self.pick_position)
        lift_pose = self._offset_pose(pick_pose, self.lift_height)
    
        '''
        motion_steps = (
            #(pick_hover, "Moving to pre-grasp hover"),
            (pick_pose, "Executing Hover"),
        )
            
        for pose, label in motion_steps:
            if not self._move_cartesian(pose, label):s
                return False
        '''

        self._command_gripper(
            self.gripper_open_position,
            "Opening gripper",
        )
        self._wait(self.gripper_wait_sec)

        
        self.image_count += 1
        return True

    def _move_home(self):
        request = SendJointTrajectoryPoint.Request()
        request.goal_point.positions = self.home_joint_positions
        request.goal_point.time_from_start = self._duration_message(
            self.home_move_time_sec
        )
        self.get_logger().info("Moving to the observation configuration")
        return self._call_motion_service(
            self.joint_client,
            request,
            "Observation configuration",
        )

    def _move_cartesian(self, pose, label):
        request = SendPose.Request()
        request.pose = pose
        self.get_logger().info(
            f"{label}: x={pose.position.x:.3f}, y={pose.position.y:.3f}, "
            f"z={pose.position.z:.3f}"
        )
        return self._call_motion_service(self.cartesian_client, request, label)

    def _call_motion_service(self, client, request, label):
        future = client.call_async(request)
        deadline = time.monotonic() + self.motion_timeout_sec
        while rclpy.ok() and not future.done():
            if time.monotonic() >= deadline:
                self.get_logger().error(f"{label} timed out")
                return False
            time.sleep(0.05)

        result = future.result()
        if result is None or not result.success:
            self.get_logger().error(f"{label} failed")
            return False
        return True

    def _command_gripper(self, position, label):
        command = Float64MultiArray()
        command.data = [position]
        self.gripper_pub.publish(command)
        self.get_logger().info(f"{label}: joint target={position:.3f}")

    def _make_pose(self, position):
        pose = Pose()
        pose.position.x, pose.position.y, pose.position.z = position
        pose.position.z=pose.position.z+self.hover_height
        (
            pose.orientation.x,
            pose.orientation.y,
            pose.orientation.z,
            pose.orientation.w,
        ) = self.tool_orientation
        return pose

    @staticmethod
    def _offset_pose(source, z_offset):
        pose = Pose()
        pose.position.x = source.position.x
        pose.position.y = source.position.y
        pose.position.z = source.position.z + z_offset
        pose.orientation = source.orientation
        return pose

    @staticmethod
    def _duration_message(seconds):
        seconds = max(0.0, float(seconds))
        whole_seconds = int(seconds)
        nanoseconds = int(round((seconds - whole_seconds) * 1_000_000_000))
        if nanoseconds >= 1_000_000_000:
            whole_seconds += 1
            nanoseconds -= 1_000_000_000
        return Duration(sec=whole_seconds, nanosec=nanoseconds)

    @staticmethod
    def _wait(seconds):
        deadline = time.monotonic() + max(0.0, seconds)
        while rclpy.ok() and time.monotonic() < deadline:
            time.sleep(0.05)


    def _visual_servo(self, tol=0.01, max_time=60.0, period=0.1):
        self.log_feats = []
        end = time.monotonic() + max_time

        while rclpy.ok() and time.monotonic() < end:
            if self.curr_feats is None:
                time.sleep(0.05)
                continue

            s = self.curr_feats.copy()
            e = s - self.des_feats                # 8x1
            self.log_feats.append(s.flatten())

            if np.linalg.norm(e) < tol:
                self.get_logger().info("s = s*")
                break 

            L = np.vstack([self._image_jacob(s[i:i+2].flatten())
                        for i in range(0, 8, 2)])      # 8x6
            v = (-self.gain * (np.linalg.pinv(L) @ e)).flatten()   

            v[:3] = np.clip(v[:3], -self.max_lin, self.max_lin)
            v[3:] = np.clip(v[3:], -self.max_ang, self.max_ang)

            if not self.set_ee_velocity(*v):
                break
            time.sleep(period)

        self.set_ee_velocity() 
        self._plot_trajectories()

    def _plot_trajectories(self):
        import matplotlib
        matplotlib.use("Agg")
        import matplotlib.pyplot as plt

        data = np.array(self.log_feats)
        names = ["teal", "green", "blue", "yellow"]
        f = self.focal * 1e-3
        s = self.pix_size * 1e-3
        fig, ax = plt.subplots()
        for i, name in enumerate(names):
            # convert back to pixels so the plot matches the image plane
            u = data[:, 2*i] / s + self.cam_cent_x
            v = data[:, 2*i+1] / s + self.cam_cent_y
            ax.plot(u, v, label=name)
            ax.plot(u[0], v[0], "o")
            ax.plot(u[-1], v[-1], "x")
        des = self.des_feats.flatten()
        ax.set_xlabel("u (px)"); ax.set_ylabel("v (px)")
        ax.invert_yaxis(); ax.legend(); ax.set_title("Feature trajectories")
        fig.savefig("feature_trajectories.png", dpi=150)

            



def main(args=None):
    """Start the fixed-pose assignment node."""
    rclpy.init(args=args)
    node = VisualServo()
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
