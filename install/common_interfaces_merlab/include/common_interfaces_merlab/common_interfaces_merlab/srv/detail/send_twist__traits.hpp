// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_interfaces_merlab:srv/SendTwist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "common_interfaces_merlab/srv/send_twist.hpp"


#ifndef COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__TRAITS_HPP_
#define COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_interfaces_merlab/srv/detail/send_twist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace common_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendTwist_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTwist_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTwist_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_interfaces_merlab

namespace rosidl_generator_traits
{

[[deprecated("use common_interfaces_merlab::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_interfaces_merlab::srv::SendTwist_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces_merlab::srv::SendTwist_Request & msg)
{
  return common_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendTwist_Request>()
{
  return "common_interfaces_merlab::srv::SendTwist_Request";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendTwist_Request>()
{
  return "common_interfaces_merlab/srv/SendTwist_Request";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendTwist_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendTwist_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<common_interfaces_merlab::srv::SendTwist_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace common_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendTwist_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTwist_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTwist_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_interfaces_merlab

namespace rosidl_generator_traits
{

[[deprecated("use common_interfaces_merlab::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_interfaces_merlab::srv::SendTwist_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces_merlab::srv::SendTwist_Response & msg)
{
  return common_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendTwist_Response>()
{
  return "common_interfaces_merlab::srv::SendTwist_Response";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendTwist_Response>()
{
  return "common_interfaces_merlab/srv/SendTwist_Response";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendTwist_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendTwist_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<common_interfaces_merlab::srv::SendTwist_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace common_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendTwist_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTwist_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTwist_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace common_interfaces_merlab

namespace rosidl_generator_traits
{

[[deprecated("use common_interfaces_merlab::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_interfaces_merlab::srv::SendTwist_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces_merlab::srv::SendTwist_Event & msg)
{
  return common_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendTwist_Event>()
{
  return "common_interfaces_merlab::srv::SendTwist_Event";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendTwist_Event>()
{
  return "common_interfaces_merlab/srv/SendTwist_Event";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendTwist_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendTwist_Event>
  : std::integral_constant<bool, has_bounded_size<common_interfaces_merlab::srv::SendTwist_Request>::value && has_bounded_size<common_interfaces_merlab::srv::SendTwist_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<common_interfaces_merlab::srv::SendTwist_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendTwist>()
{
  return "common_interfaces_merlab::srv::SendTwist";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendTwist>()
{
  return "common_interfaces_merlab/srv/SendTwist";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendTwist>
  : std::integral_constant<
    bool,
    has_fixed_size<common_interfaces_merlab::srv::SendTwist_Request>::value &&
    has_fixed_size<common_interfaces_merlab::srv::SendTwist_Response>::value
  >
{
};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendTwist>
  : std::integral_constant<
    bool,
    has_bounded_size<common_interfaces_merlab::srv::SendTwist_Request>::value &&
    has_bounded_size<common_interfaces_merlab::srv::SendTwist_Response>::value
  >
{
};

template<>
struct is_service<common_interfaces_merlab::srv::SendTwist>
  : std::true_type
{
};

template<>
struct is_service_request<common_interfaces_merlab::srv::SendTwist_Request>
  : std::true_type
{
};

template<>
struct is_service_response<common_interfaces_merlab::srv::SendTwist_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__TRAITS_HPP_
