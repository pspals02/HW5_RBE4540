"""Simple example: receive camera images and send poses and velocities."""

import time

import rclpy
from common_interfaces_merlab.srv import SendPose, SendTwist
from cv_bridge import CvBridge
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
import cv2
import numpy as np

class MoveHover(Node):
    def __init__(self):
        super().__init__('simple_run')
        self.cartesian_client = self.create_client(SendPose, '/cartesian_ref')
        self.ee_velocity_client = self.create_client(SendTwist, '/set_ee_velocity')
        self.bridge = CvBridge()
        self.image_count=0
        self.palm_image = None  # Latest OpenCV image; None until one arrives.
        self.palm_camera_subscriber = self.create_subscription(
            Image,
            '/palm_camera/image',
            self.palm_image_callback,
            qos_profile_sensor_data,
        )

    def palm_image_callback(self, msg):
        """Convert the ROS image to an OpenCV image (BGR NumPy array)."""
        self.palm_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        
        if self.image_count == 1:
            self.get_logger().info(
                f"Received first image: {msg.width}x{msg.height}, "
                f"encoding={msg.encoding}"
            )
            self._image_mask(self.palm_image)
            self._hough_circ_centers(self.palm_image)
    
            filename = 'saved_ros2_init_image.png'
            cv2.imwrite(filename, self.palm_image)
            
            
            self.get_logger().info(f'Successfully saved image to {filename}')
            rclpy.shutdown()
    def _image_mask(self, cv_image):
        lower_teal = np.array([150, 150, 0])
        upper_teal = np.array([255, 255, 100])

        lower_green = np.array([0, 100, 0])
        upper_green = np.array([80, 255, 80])

        lower_blue = np.array([150, 0, 0])
        upper_blue = np.array([255, 100, 100])

        lower_yellow = np.array([0, 100, 100])
        upper_yellow = np.array([50, 255, 255])
        
        
        teal_mask = cv2.inRange(cv_image, lower_teal, upper_teal)
        green_mask = cv2.inRange(cv_image, lower_green, upper_green)
        blue_mask = cv2.inRange(cv_image, lower_blue, upper_blue)
        yellow_mask = cv2.inRange(cv_image, lower_yellow, upper_yellow)
        
        teal_center = self._center_dot(teal_mask)
        green_center = self._center_dot(green_mask)
        blue_center = self._center_dot(blue_mask)
        yellow_center = self._center_dot(yellow_mask)

        print("teal:", teal_center)
        print("Green:", green_center)
        print("Blue:", blue_center)
        print("Yellow:", yellow_center)
        
        mask_green = cv2.cvtColor(green_mask, cv2.COLOR_GRAY2BGR)
        mask_teal = cv2.cvtColor(teal_mask, cv2.COLOR_GRAY2BGR)
        mask_blue = cv2.cvtColor(blue_mask, cv2.COLOR_GRAY2BGR)
        mask_yellow = cv2.cvtColor(yellow_mask, cv2.COLOR_GRAY2BGR)
        
        masked_image_teal = cv_image & mask_teal
        masked_image_green = cv_image & mask_green
        masked_image_blue = cv_image & mask_blue
        masked_image_yellow = cv_image & mask_yellow
        
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

        return center_x, center_y
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
        cv2.imwrite('init_hough_circ.png', result)

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

    def run(self):
        self.get_logger().info('Waiting for /cartesian_ref...')
        while rclpy.ok():
            if self.cartesian_client.wait_for_service(timeout_sec=1.0):
                break
        if not rclpy.ok():
            return

        # TODO: Implement your homework here. Edit or extend these two moves.
        # Each call waits for the robot to finish before continuing.
        # Images are received while the motion methods spin waiting for replies.
        # To receive images outside those methods, call rclpy.spin_once(self).
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
            self.image_count+=1
            stopped = self.set_ee_velocity() if rclpy.ok() else False
        if not stopped:
            return
        
            
        self.get_logger().info('Motion sequence complete')


def main(args=None):
    rclpy.init(args=args)
    node = MoveHover()
    try:
        node.run()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
