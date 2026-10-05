// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from move_interfaces_merlab:srv/SendJointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_interfaces_merlab/srv/send_joint_trajectory.h"


#ifndef MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__STRUCT_H_
#define MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_points'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in srv/SendJointTrajectory in the package move_interfaces_merlab.
typedef struct move_interfaces_merlab__srv__SendJointTrajectory_Request
{
  trajectory_msgs__msg__JointTrajectory goal_points;
} move_interfaces_merlab__srv__SendJointTrajectory_Request;

// Struct for a sequence of move_interfaces_merlab__srv__SendJointTrajectory_Request.
typedef struct move_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence
{
  move_interfaces_merlab__srv__SendJointTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SendJointTrajectory in the package move_interfaces_merlab.
typedef struct move_interfaces_merlab__srv__SendJointTrajectory_Response
{
  bool success;
} move_interfaces_merlab__srv__SendJointTrajectory_Response;

// Struct for a sequence of move_interfaces_merlab__srv__SendJointTrajectory_Response.
typedef struct move_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence
{
  move_interfaces_merlab__srv__SendJointTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  move_interfaces_merlab__srv__SendJointTrajectory_Event__request__MAX_SIZE = 1
};
// response
enum
{
  move_interfaces_merlab__srv__SendJointTrajectory_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SendJointTrajectory in the package move_interfaces_merlab.
typedef struct move_interfaces_merlab__srv__SendJointTrajectory_Event
{
  service_msgs__msg__ServiceEventInfo info;
  move_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence request;
  move_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence response;
} move_interfaces_merlab__srv__SendJointTrajectory_Event;

// Struct for a sequence of move_interfaces_merlab__srv__SendJointTrajectory_Event.
typedef struct move_interfaces_merlab__srv__SendJointTrajectory_Event__Sequence
{
  move_interfaces_merlab__srv__SendJointTrajectory_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interfaces_merlab__srv__SendJointTrajectory_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__STRUCT_H_
