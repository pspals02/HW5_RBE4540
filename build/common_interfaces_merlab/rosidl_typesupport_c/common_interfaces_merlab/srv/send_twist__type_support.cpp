// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from common_interfaces_merlab:srv/SendTwist.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "common_interfaces_merlab/srv/detail/send_twist__struct.h"
#include "common_interfaces_merlab/srv/detail/send_twist__type_support.h"
#include "common_interfaces_merlab/srv/detail/send_twist__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace common_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendTwist_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTwist_Request_type_support_ids_t;

static const _SendTwist_Request_type_support_ids_t _SendTwist_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTwist_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTwist_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTwist_Request_type_support_symbol_names_t _SendTwist_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_interfaces_merlab, srv, SendTwist_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_interfaces_merlab, srv, SendTwist_Request)),
  }
};

typedef struct _SendTwist_Request_type_support_data_t
{
  void * data[2];
} _SendTwist_Request_type_support_data_t;

static _SendTwist_Request_type_support_data_t _SendTwist_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTwist_Request_message_typesupport_map = {
  2,
  "common_interfaces_merlab",
  &_SendTwist_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendTwist_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendTwist_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTwist_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTwist_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &common_interfaces_merlab__srv__SendTwist_Request__get_type_hash,
  &common_interfaces_merlab__srv__SendTwist_Request__get_type_description,
  &common_interfaces_merlab__srv__SendTwist_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace common_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, common_interfaces_merlab, srv, SendTwist_Request)() {
  return &::common_interfaces_merlab::srv::rosidl_typesupport_c::SendTwist_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "common_interfaces_merlab/srv/detail/send_twist__struct.h"
// already included above
// #include "common_interfaces_merlab/srv/detail/send_twist__type_support.h"
// already included above
// #include "common_interfaces_merlab/srv/detail/send_twist__functions.h"
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

namespace common_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendTwist_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTwist_Response_type_support_ids_t;

static const _SendTwist_Response_type_support_ids_t _SendTwist_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTwist_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTwist_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTwist_Response_type_support_symbol_names_t _SendTwist_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_interfaces_merlab, srv, SendTwist_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_interfaces_merlab, srv, SendTwist_Response)),
  }
};

typedef struct _SendTwist_Response_type_support_data_t
{
  void * data[2];
} _SendTwist_Response_type_support_data_t;

static _SendTwist_Response_type_support_data_t _SendTwist_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTwist_Response_message_typesupport_map = {
  2,
  "common_interfaces_merlab",
  &_SendTwist_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendTwist_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendTwist_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTwist_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTwist_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &common_interfaces_merlab__srv__SendTwist_Response__get_type_hash,
  &common_interfaces_merlab__srv__SendTwist_Response__get_type_description,
  &common_interfaces_merlab__srv__SendTwist_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace common_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, common_interfaces_merlab, srv, SendTwist_Response)() {
  return &::common_interfaces_merlab::srv::rosidl_typesupport_c::SendTwist_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "common_interfaces_merlab/srv/detail/send_twist__struct.h"
// already included above
// #include "common_interfaces_merlab/srv/detail/send_twist__type_support.h"
// already included above
// #include "common_interfaces_merlab/srv/detail/send_twist__functions.h"
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

namespace common_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendTwist_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTwist_Event_type_support_ids_t;

static const _SendTwist_Event_type_support_ids_t _SendTwist_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTwist_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTwist_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTwist_Event_type_support_symbol_names_t _SendTwist_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_interfaces_merlab, srv, SendTwist_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_interfaces_merlab, srv, SendTwist_Event)),
  }
};

typedef struct _SendTwist_Event_type_support_data_t
{
  void * data[2];
} _SendTwist_Event_type_support_data_t;

static _SendTwist_Event_type_support_data_t _SendTwist_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTwist_Event_message_typesupport_map = {
  2,
  "common_interfaces_merlab",
  &_SendTwist_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SendTwist_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SendTwist_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTwist_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTwist_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &common_interfaces_merlab__srv__SendTwist_Event__get_type_hash,
  &common_interfaces_merlab__srv__SendTwist_Event__get_type_description,
  &common_interfaces_merlab__srv__SendTwist_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace common_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, common_interfaces_merlab, srv, SendTwist_Event)() {
  return &::common_interfaces_merlab::srv::rosidl_typesupport_c::SendTwist_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "common_interfaces_merlab/srv/detail/send_twist__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace common_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SendTwist_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTwist_type_support_ids_t;

static const _SendTwist_type_support_ids_t _SendTwist_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTwist_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTwist_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTwist_type_support_symbol_names_t _SendTwist_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_interfaces_merlab, srv, SendTwist)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_interfaces_merlab, srv, SendTwist)),
  }
};

typedef struct _SendTwist_type_support_data_t
{
  void * data[2];
} _SendTwist_type_support_data_t;

static _SendTwist_type_support_data_t _SendTwist_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTwist_service_typesupport_map = {
  2,
  "common_interfaces_merlab",
  &_SendTwist_service_typesupport_ids.typesupport_identifier[0],
  &_SendTwist_service_typesupport_symbol_names.symbol_name[0],
  &_SendTwist_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendTwist_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTwist_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SendTwist_Request_message_type_support_handle,
  &SendTwist_Response_message_type_support_handle,
  &SendTwist_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    common_interfaces_merlab,
    srv,
    SendTwist
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    common_interfaces_merlab,
    srv,
    SendTwist
  ),
  &common_interfaces_merlab__srv__SendTwist__get_type_hash,
  &common_interfaces_merlab__srv__SendTwist__get_type_description,
  &common_interfaces_merlab__srv__SendTwist__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace common_interfaces_merlab

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, common_interfaces_merlab, srv, SendTwist)() {
  return &::common_interfaces_merlab::srv::rosidl_typesupport_c::SendTwist_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
