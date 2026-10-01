// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_interfaces_merlab:srv/SendJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "common_interfaces_merlab/srv/send_joint_trajectory_point.hpp"


#ifndef COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY_POINT__BUILDER_HPP_
#define COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "common_interfaces_merlab/srv/detail/send_joint_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendJointTrajectoryPoint_Request_goal_point
{
public:
  Init_SendJointTrajectoryPoint_Request_goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request goal_point(::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Request>()
{
  return common_interfaces_merlab::srv::builder::Init_SendJointTrajectoryPoint_Request_goal_point();
}

}  // namespace common_interfaces_merlab


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendJointTrajectoryPoint_Response_success
{
public:
  Init_SendJointTrajectoryPoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response success(::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Response>()
{
  return common_interfaces_merlab::srv::builder::Init_SendJointTrajectoryPoint_Response_success();
}

}  // namespace common_interfaces_merlab


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendJointTrajectoryPoint_Event_response
{
public:
  explicit Init_SendJointTrajectoryPoint_Event_response(::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event & msg)
  : msg_(msg)
  {}
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event response(::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event msg_;
};

class Init_SendJointTrajectoryPoint_Event_request
{
public:
  explicit Init_SendJointTrajectoryPoint_Event_request(::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event & msg)
  : msg_(msg)
  {}
  Init_SendJointTrajectoryPoint_Event_response request(::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendJointTrajectoryPoint_Event_response(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event msg_;
};

class Init_SendJointTrajectoryPoint_Event_info
{
public:
  Init_SendJointTrajectoryPoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendJointTrajectoryPoint_Event_request info(::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendJointTrajectoryPoint_Event_request(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendJointTrajectoryPoint_Event>()
{
  return common_interfaces_merlab::srv::builder::Init_SendJointTrajectoryPoint_Event_info();
}

}  // namespace common_interfaces_merlab

#endif  // COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY_POINT__BUILDER_HPP_
