// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_interfaces_merlab:srv/SendJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "common_interfaces_merlab/srv/send_joint_trajectory_point.hpp"


#ifndef COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
#define COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_interfaces_merlab/srv/detail/send_joint_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"

namespace common_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendJointTrajectoryPoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_point
  {
    out << "goal_point: ";
    to_flow_style_yaml(msg.goal_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendJointTrajectoryPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_point:\n";
    to_block_style_yaml(msg.goal_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendJointTrajectoryPoint_Request & msg, bool use_flow_style = false)
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
  const common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request & msg)
{
  return common_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>()
{
  return "common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>()
{
  return "common_interfaces_merlab/srv/SendJointTrajectoryPoint_Request";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct is_message<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace common_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendJointTrajectoryPoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendJointTrajectoryPoint_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendJointTrajectoryPoint_Response & msg, bool use_flow_style = false)
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
  const common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response & msg)
{
  return common_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>()
{
  return "common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>()
{
  return "common_interfaces_merlab/srv/SendJointTrajectoryPoint_Response";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>
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
  const SendJointTrajectoryPoint_Event & msg,
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
  const SendJointTrajectoryPoint_Event & msg,
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

inline std::string to_yaml(const SendJointTrajectoryPoint_Event & msg, bool use_flow_style = false)
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
  const common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event & msg)
{
  return common_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event>()
{
  return "common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event>()
{
  return "common_interfaces_merlab/srv/SendJointTrajectoryPoint_Event";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event>
  : std::integral_constant<bool, has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>::value && has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_interfaces_merlab::srv::SendJointTrajectoryPoint>()
{
  return "common_interfaces_merlab::srv::SendJointTrajectoryPoint";
}

template<>
inline const char * name<common_interfaces_merlab::srv::SendJointTrajectoryPoint>()
{
  return "common_interfaces_merlab/srv/SendJointTrajectoryPoint";
}

template<>
struct has_fixed_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint>
  : std::integral_constant<
    bool,
    has_fixed_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>::value &&
    has_fixed_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint>
  : std::integral_constant<
    bool,
    has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>::value &&
    has_bounded_size<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>::value
  >
{
};

template<>
struct is_service<common_interfaces_merlab::srv::SendJointTrajectoryPoint>
  : std::true_type
{
};

template<>
struct is_service_request<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
