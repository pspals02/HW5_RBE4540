// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from move_interfaces_merlab:srv/SendPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "move_interfaces_merlab/srv/detail/send_pose__functions.h"
#include "move_interfaces_merlab/srv/detail/send_pose__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendPose_Request_type_support_ids_t;

static const _SendPose_Request_type_support_ids_t _SendPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendPose_Request_type_support_symbol_names_t _SendPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, move_interfaces_merlab, srv, SendPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, move_interfaces_merlab, srv, SendPose_Request)),
  }
};

typedef struct _SendPose_Request_type_support_data_t
{
  void * data[2];
} _SendPose_Request_type_support_data_t;

static _SendPose_Request_type_support_data_t _SendPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendPose_Request_message_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendPose_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendPose_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &move_interfaces_merlab__srv__SendPose_Request__get_type_hash,
  &move_interfaces_merlab__srv__SendPose_Request__get_type_description,
  &move_interfaces_merlab__srv__SendPose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace move_interfaces_merlab

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Request>()
{
  return &::move_interfaces_merlab::srv::rosidl_typesupport_cpp::SendPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, move_interfaces_merlab, srv, SendPose_Request)() {
  return get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_pose__functions.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendPose_Response_type_support_ids_t;

static const _SendPose_Response_type_support_ids_t _SendPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendPose_Response_type_support_symbol_names_t _SendPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, move_interfaces_merlab, srv, SendPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, move_interfaces_merlab, srv, SendPose_Response)),
  }
};

typedef struct _SendPose_Response_type_support_data_t
{
  void * data[2];
} _SendPose_Response_type_support_data_t;

static _SendPose_Response_type_support_data_t _SendPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendPose_Response_message_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendPose_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendPose_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &move_interfaces_merlab__srv__SendPose_Response__get_type_hash,
  &move_interfaces_merlab__srv__SendPose_Response__get_type_description,
  &move_interfaces_merlab__srv__SendPose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace move_interfaces_merlab

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Response>()
{
  return &::move_interfaces_merlab::srv::rosidl_typesupport_cpp::SendPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, move_interfaces_merlab, srv, SendPose_Response)() {
  return get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_pose__functions.h"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendPose_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendPose_Event_type_support_ids_t;

static const _SendPose_Event_type_support_ids_t _SendPose_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendPose_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendPose_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendPose_Event_type_support_symbol_names_t _SendPose_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, move_interfaces_merlab, srv, SendPose_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, move_interfaces_merlab, srv, SendPose_Event)),
  }
};

typedef struct _SendPose_Event_type_support_data_t
{
  void * data[2];
} _SendPose_Event_type_support_data_t;

static _SendPose_Event_type_support_data_t _SendPose_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendPose_Event_message_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendPose_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SendPose_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SendPose_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendPose_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendPose_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &move_interfaces_merlab__srv__SendPose_Event__get_type_hash,
  &move_interfaces_merlab__srv__SendPose_Event__get_type_description,
  &move_interfaces_merlab__srv__SendPose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace move_interfaces_merlab

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Event>()
{
  return &::move_interfaces_merlab::srv::rosidl_typesupport_cpp::SendPose_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, move_interfaces_merlab, srv, SendPose_Event)() {
  return get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "move_interfaces_merlab/srv/detail/send_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace move_interfaces_merlab
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendPose_type_support_ids_t;

static const _SendPose_type_support_ids_t _SendPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendPose_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendPose_type_support_symbol_names_t _SendPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, move_interfaces_merlab, srv, SendPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, move_interfaces_merlab, srv, SendPose)),
  }
};

typedef struct _SendPose_type_support_data_t
{
  void * data[2];
} _SendPose_type_support_data_t;

static _SendPose_type_support_data_t _SendPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendPose_service_typesupport_map = {
  2,
  "move_interfaces_merlab",
  &_SendPose_service_typesupport_ids.typesupport_identifier[0],
  &_SendPose_service_typesupport_symbol_names.symbol_name[0],
  &_SendPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendPose_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendPose_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<move_interfaces_merlab::srv::SendPose_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<move_interfaces_merlab::srv::SendPose>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<move_interfaces_merlab::srv::SendPose>,
  &move_interfaces_merlab__srv__SendPose__get_type_hash,
  &move_interfaces_merlab__srv__SendPose__get_type_description,
  &move_interfaces_merlab__srv__SendPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace move_interfaces_merlab

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<move_interfaces_merlab::srv::SendPose>()
{
  return &::move_interfaces_merlab::srv::rosidl_typesupport_cpp::SendPose_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, move_interfaces_merlab, srv, SendPose)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<move_interfaces_merlab::srv::SendPose>();
}

#ifdef __cplusplus
}
#endif
