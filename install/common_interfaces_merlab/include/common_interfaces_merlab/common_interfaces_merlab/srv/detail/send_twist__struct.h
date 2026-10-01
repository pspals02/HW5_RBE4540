// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_interfaces_merlab:srv/SendTwist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "common_interfaces_merlab/srv/send_twist.h"


#ifndef COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__STRUCT_H_
#define COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/SendTwist in the package common_interfaces_merlab.
typedef struct common_interfaces_merlab__srv__SendTwist_Request
{
  geometry_msgs__msg__Twist twist;
} common_interfaces_merlab__srv__SendTwist_Request;

// Struct for a sequence of common_interfaces_merlab__srv__SendTwist_Request.
typedef struct common_interfaces_merlab__srv__SendTwist_Request__Sequence
{
  common_interfaces_merlab__srv__SendTwist_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_interfaces_merlab__srv__SendTwist_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendTwist in the package common_interfaces_merlab.
typedef struct common_interfaces_merlab__srv__SendTwist_Response
{
  bool success;
  rosidl_runtime_c__String message;
} common_interfaces_merlab__srv__SendTwist_Response;

// Struct for a sequence of common_interfaces_merlab__srv__SendTwist_Response.
typedef struct common_interfaces_merlab__srv__SendTwist_Response__Sequence
{
  common_interfaces_merlab__srv__SendTwist_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_interfaces_merlab__srv__SendTwist_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  common_interfaces_merlab__srv__SendTwist_Event__request__MAX_SIZE = 1
};
// response
enum
{
  common_interfaces_merlab__srv__SendTwist_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SendTwist in the package common_interfaces_merlab.
typedef struct common_interfaces_merlab__srv__SendTwist_Event
{
  service_msgs__msg__ServiceEventInfo info;
  common_interfaces_merlab__srv__SendTwist_Request__Sequence request;
  common_interfaces_merlab__srv__SendTwist_Response__Sequence response;
} common_interfaces_merlab__srv__SendTwist_Event;

// Struct for a sequence of common_interfaces_merlab__srv__SendTwist_Event.
typedef struct common_interfaces_merlab__srv__SendTwist_Event__Sequence
{
  common_interfaces_merlab__srv__SendTwist_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_interfaces_merlab__srv__SendTwist_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__STRUCT_H_
