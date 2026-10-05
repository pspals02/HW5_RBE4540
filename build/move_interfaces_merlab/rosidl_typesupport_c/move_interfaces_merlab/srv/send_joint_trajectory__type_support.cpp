// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from move_interfaces_merlab:srv/SendJointTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "move_interfaces_merlab/srv/detail/send_joint_trajectory__struct.h"
#include "move_interfaces_merlab/srv/detail/send_joint_trajectory__type_support.h"
#include "move_interfaces_merlab/srv/detail/send_joint_trajectory__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendJointTrajectory_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendJointTrajectory_Request_type_support_ids_t;

static const _SendJointTrajectory_Request_type_support_ids_t _SendJointTrajectory_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendJointTrajectory_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendJointTrajectory_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendJointTrajectory_Request_type_support_symbol_names_t _SendJointTrajectory_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, move_interfaces_merlab, srv, SendJointTrajectory_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_interfaces_merlab, srv, SendJointTrajectory_Request)),
  }
};

typedef struct _SendJointTrajectory_Request_type_support_data_t
{
  void * data[2];
} _SendJointTrajectory_Request_type_support_data_t;

static _SendJointTrajectory_Request_type_support_data_t _SendJointTrajectory_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendJointTrajectory_Request_message_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendJointTrajectory_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendJointTrajectory_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendJointTrajectory_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendJointTrajectory_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendJointTrajectory_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &move_interfaces_merlab__srv__SendJointTrajectory_Request__get_type_hash,
  &move_interfaces_merlab__srv__SendJointTrajectory_Request__get_type_description,
  &move_interfaces_merlab__srv__SendJointTrajectory_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace move_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, move_interfaces_merlab, srv, SendJointTrajectory_Request)() {
  return &::move_interfaces_merlab::srv::rosidl_typesupport_c::SendJointTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_joint_trajectory__struct.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_joint_trajectory__type_support.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_joint_trajectory__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendJointTrajectory_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendJointTrajectory_Response_type_support_ids_t;

static const _SendJointTrajectory_Response_type_support_ids_t _SendJointTrajectory_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendJointTrajectory_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendJointTrajectory_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendJointTrajectory_Response_type_support_symbol_names_t _SendJointTrajectory_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, move_interfaces_merlab, srv, SendJointTrajectory_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_interfaces_merlab, srv, SendJointTrajectory_Response)),
  }
};

typedef struct _SendJointTrajectory_Response_type_support_data_t
{
  void * data[2];
} _SendJointTrajectory_Response_type_support_data_t;

static _SendJointTrajectory_Response_type_support_data_t _SendJointTrajectory_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendJointTrajectory_Response_message_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendJointTrajectory_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendJointTrajectory_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendJointTrajectory_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendJointTrajectory_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendJointTrajectory_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &move_interfaces_merlab__srv__SendJointTrajectory_Response__get_type_hash,
  &move_interfaces_merlab__srv__SendJointTrajectory_Response__get_type_description,
  &move_interfaces_merlab__srv__SendJointTrajectory_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace move_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, move_interfaces_merlab, srv, SendJointTrajectory_Response)() {
  return &::move_interfaces_merlab::srv::rosidl_typesupport_c::SendJointTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_joint_trajectory__struct.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_joint_trajectory__type_support.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_joint_trajectory__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendJointTrajectory_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendJointTrajectory_Event_type_support_ids_t;

static const _SendJointTrajectory_Event_type_support_ids_t _SendJointTrajectory_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendJointTrajectory_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendJointTrajectory_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendJointTrajectory_Event_type_support_symbol_names_t _SendJointTrajectory_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, move_interfaces_merlab, srv, SendJointTrajectory_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_interfaces_merlab, srv, SendJointTrajectory_Event)),
  }
};

typedef struct _SendJointTrajectory_Event_type_support_data_t
{
  void * data[2];
} _SendJointTrajectory_Event_type_support_data_t;

static _SendJointTrajectory_Event_type_support_data_t _SendJointTrajectory_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendJointTrajectory_Event_message_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendJointTrajectory_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SendJointTrajectory_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SendJointTrajectory_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendJointTrajectory_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendJointTrajectory_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &move_interfaces_merlab__srv__SendJointTrajectory_Event__get_type_hash,
  &move_interfaces_merlab__srv__SendJointTrajectory_Event__get_type_description,
  &move_interfaces_merlab__srv__SendJointTrajectory_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace move_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, move_interfaces_merlab, srv, SendJointTrajectory_Event)() {
  return &::move_interfaces_merlab::srv::rosidl_typesupport_c::SendJointTrajectory_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_joint_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SendJointTrajectory_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendJointTrajectory_type_support_ids_t;

static const _SendJointTrajectory_type_support_ids_t _SendJointTrajectory_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendJointTrajectory_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendJointTrajectory_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendJointTrajectory_type_support_symbol_names_t _SendJointTrajectory_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, move_interfaces_merlab, srv, SendJointTrajectory)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_interfaces_merlab, srv, SendJointTrajectory)),
  }
};

typedef struct _SendJointTrajectory_type_support_data_t
{
  void * data[2];
} _SendJointTrajectory_type_support_data_t;

static _SendJointTrajectory_type_support_data_t _SendJointTrajectory_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendJointTrajectory_service_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendJointTrajectory_service_typesupport_ids.typesupport_identifier[0],
  &_SendJointTrajectory_service_typesupport_symbol_names.symbol_name[0],
  &_SendJointTrajectory_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendJointTrajectory_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendJointTrajectory_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SendJointTrajectory_Request_message_type_support_handle,
  &SendJointTrajectory_Response_message_type_support_handle,
  &SendJointTrajectory_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    move_interfaces_merlab,
    srv,
    SendJointTrajectory
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    move_interfaces_merlab,
    srv,
    SendJointTrajectory
  ),
  &move_interfaces_merlab__srv__SendJointTrajectory__get_type_hash,
  &move_interfaces_merlab__srv__SendJointTrajectory__get_type_description,
  &move_interfaces_merlab__srv__SendJointTrajectory__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace move_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, move_interfaces_merlab, srv, SendJointTrajectory)() {
  return &::move_interfaces_merlab::srv::rosidl_typesupport_c::SendJointTrajectory_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
