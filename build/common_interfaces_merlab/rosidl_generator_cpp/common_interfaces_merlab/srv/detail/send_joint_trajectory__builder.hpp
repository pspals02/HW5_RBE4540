// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_interfaces_merlab:srv/SendJointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "common_interfaces_merlab/srv/send_joint_trajectory.hpp"


#ifndef COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__BUILDER_HPP_
#define COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "common_interfaces_merlab/srv/detail/send_joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendJointTrajectory_Request_goal_points
{
public:
  Init_SendJointTrajectory_Request_goal_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_interfaces_merlab::srv::SendJointTrajectory_Request goal_points(::common_interfaces_merlab::srv::SendJointTrajectory_Request::_goal_points_type arg)
  {
    msg_.goal_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendJointTrajectory_Request>()
{
  return common_interfaces_merlab::srv::builder::Init_SendJointTrajectory_Request_goal_points();
}

}  // namespace common_interfaces_merlab


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendJointTrajectory_Response_success
{
public:
  Init_SendJointTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_interfaces_merlab::srv::SendJointTrajectory_Response success(::common_interfaces_merlab::srv::SendJointTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendJointTrajectory_Response>()
{
  return common_interfaces_merlab::srv::builder::Init_SendJointTrajectory_Response_success();
}

}  // namespace common_interfaces_merlab


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendJointTrajectory_Event_response
{
public:
  explicit Init_SendJointTrajectory_Event_response(::common_interfaces_merlab::srv::SendJointTrajectory_Event & msg)
  : msg_(msg)
  {}
  ::common_interfaces_merlab::srv::SendJointTrajectory_Event response(::common_interfaces_merlab::srv::SendJointTrajectory_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectory_Event msg_;
};

class Init_SendJointTrajectory_Event_request
{
public:
  explicit Init_SendJointTrajectory_Event_request(::common_interfaces_merlab::srv::SendJointTrajectory_Event & msg)
  : msg_(msg)
  {}
  Init_SendJointTrajectory_Event_response request(::common_interfaces_merlab::srv::SendJointTrajectory_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendJointTrajectory_Event_response(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectory_Event msg_;
};

class Init_SendJointTrajectory_Event_info
{
public:
  Init_SendJointTrajectory_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendJointTrajectory_Event_request info(::common_interfaces_merlab::srv::SendJointTrajectory_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendJointTrajectory_Event_request(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectory_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendJointTrajectory_Event>()
{
  return common_interfaces_merlab::srv::builder::Init_SendJointTrajectory_Event_info();
}

}  // namespace common_interfaces_merlab

#endif  // COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__BUILDER_HPP_
