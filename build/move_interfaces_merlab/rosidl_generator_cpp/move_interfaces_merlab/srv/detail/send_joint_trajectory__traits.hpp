// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from move_interfaces_merlab:srv/SendJointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_interfaces_merlab/srv/send_joint_trajectory.hpp"


#ifndef MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__TRAITS_HPP_
#define MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "move_interfaces_merlab/srv/detail/send_joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_points'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace move_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendJointTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_points
  {
    out << "goal_points: ";
    to_flow_style_yaml(msg.goal_points, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendJointTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_points:\n";
    to_block_style_yaml(msg.goal_points, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendJointTrajectory_Request & msg, bool use_flow_style = false)
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

}  // namespace move_interfaces_merlab

namespace rosidl_generator_traits
{

[[deprecated("use move_interfaces_merlab::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interfaces_merlab::srv::SendJointTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const move_interfaces_merlab::srv::SendJointTrajectory_Request & msg)
{
  return move_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<move_interfaces_merlab::srv::SendJointTrajectory_Request>()
{
  return "move_interfaces_merlab::srv::SendJointTrajectory_Request";
}

template<>
inline const char * name<move_interfaces_merlab::srv::SendJointTrajectory_Request>()
{
  return "move_interfaces_merlab/srv/SendJointTrajectory_Request";
}

template<>
struct has_fixed_size<move_interfaces_merlab::srv::SendJointTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct is_message<move_interfaces_merlab::srv::SendJointTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace move_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendJointTrajectory_Response & msg,
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
  const SendJointTrajectory_Response & msg,
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

inline std::string to_yaml(const SendJointTrajectory_Response & msg, bool use_flow_style = false)
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

}  // namespace move_interfaces_merlab

namespace rosidl_generator_traits
{

[[deprecated("use move_interfaces_merlab::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interfaces_merlab::srv::SendJointTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const move_interfaces_merlab::srv::SendJointTrajectory_Response & msg)
{
  return move_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<move_interfaces_merlab::srv::SendJointTrajectory_Response>()
{
  return "move_interfaces_merlab::srv::SendJointTrajectory_Response";
}

template<>
inline const char * name<move_interfaces_merlab::srv::SendJointTrajectory_Response>()
{
  return "move_interfaces_merlab/srv/SendJointTrajectory_Response";
}

template<>
struct has_fixed_size<move_interfaces_merlab::srv::SendJointTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<move_interfaces_merlab::srv::SendJointTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace move_interfaces_merlab
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendJointTrajectory_Event & msg,
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
  const SendJointTrajectory_Event & msg,
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

inline std::string to_yaml(const SendJointTrajectory_Event & msg, bool use_flow_style = false)
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

}  // namespace move_interfaces_merlab

namespace rosidl_generator_traits
{

[[deprecated("use move_interfaces_merlab::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interfaces_merlab::srv::SendJointTrajectory_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interfaces_merlab::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interfaces_merlab::srv::to_yaml() instead")]]
inline std::string to_yaml(const move_interfaces_merlab::srv::SendJointTrajectory_Event & msg)
{
  return move_interfaces_merlab::srv::to_yaml(msg);
}

template<>
inline const char * data_type<move_interfaces_merlab::srv::SendJointTrajectory_Event>()
{
  return "move_interfaces_merlab::srv::SendJointTrajectory_Event";
}

template<>
inline const char * name<move_interfaces_merlab::srv::SendJointTrajectory_Event>()
{
  return "move_interfaces_merlab/srv/SendJointTrajectory_Event";
}

template<>
struct has_fixed_size<move_interfaces_merlab::srv::SendJointTrajectory_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory_Event>
  : std::integral_constant<bool, has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory_Request>::value && has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<move_interfaces_merlab::srv::SendJointTrajectory_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_interfaces_merlab::srv::SendJointTrajectory>()
{
  return "move_interfaces_merlab::srv::SendJointTrajectory";
}

template<>
inline const char * name<move_interfaces_merlab::srv::SendJointTrajectory>()
{
  return "move_interfaces_merlab/srv/SendJointTrajectory";
}

template<>
struct has_fixed_size<move_interfaces_merlab::srv::SendJointTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<move_interfaces_merlab::srv::SendJointTrajectory_Request>::value &&
    has_fixed_size<move_interfaces_merlab::srv::SendJointTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory_Request>::value &&
    has_bounded_size<move_interfaces_merlab::srv::SendJointTrajectory_Response>::value
  >
{
};

template<>
struct is_service<move_interfaces_merlab::srv::SendJointTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<move_interfaces_merlab::srv::SendJointTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_interfaces_merlab::srv::SendJointTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__TRAITS_HPP_
