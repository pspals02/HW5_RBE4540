// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from move_interfaces_merlab:srv/SendJointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_interfaces_merlab/srv/send_joint_trajectory.hpp"


#ifndef MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__BUILDER_HPP_
#define MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "move_interfaces_merlab/srv/detail/send_joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace move_interfaces_merlab
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
  ::move_interfaces_merlab::srv::SendJointTrajectory_Request goal_points(::move_interfaces_merlab::srv::SendJointTrajectory_Request::_goal_points_type arg)
  {
    msg_.goal_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interfaces_merlab::srv::SendJointTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interfaces_merlab::srv::SendJointTrajectory_Request>()
{
  return move_interfaces_merlab::srv::builder::Init_SendJointTrajectory_Request_goal_points();
}

}  // namespace move_interfaces_merlab


namespace move_interfaces_merlab
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
  ::move_interfaces_merlab::srv::SendJointTrajectory_Response success(::move_interfaces_merlab::srv::SendJointTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interfaces_merlab::srv::SendJointTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interfaces_merlab::srv::SendJointTrajectory_Response>()
{
  return move_interfaces_merlab::srv::builder::Init_SendJointTrajectory_Response_success();
}

}  // namespace move_interfaces_merlab


namespace move_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendJointTrajectory_Event_response
{
public:
  explicit Init_SendJointTrajectory_Event_response(::move_interfaces_merlab::srv::SendJointTrajectory_Event & msg)
  : msg_(msg)
  {}
  ::move_interfaces_merlab::srv::SendJointTrajectory_Event response(::move_interfaces_merlab::srv::SendJointTrajectory_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interfaces_merlab::srv::SendJointTrajectory_Event msg_;
};

class Init_SendJointTrajectory_Event_request
{
public:
  explicit Init_SendJointTrajectory_Event_request(::move_interfaces_merlab::srv::SendJointTrajectory_Event & msg)
  : msg_(msg)
  {}
  Init_SendJointTrajectory_Event_response request(::move_interfaces_merlab::srv::SendJointTrajectory_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendJointTrajectory_Event_response(msg_);
  }

private:
  ::move_interfaces_merlab::srv::SendJointTrajectory_Event msg_;
};

class Init_SendJointTrajectory_Event_info
{
public:
  Init_SendJointTrajectory_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendJointTrajectory_Event_request info(::move_interfaces_merlab::srv::SendJointTrajectory_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendJointTrajectory_Event_request(msg_);
  }

private:
  ::move_interfaces_merlab::srv::SendJointTrajectory_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interfaces_merlab::srv::SendJointTrajectory_Event>()
{
  return move_interfaces_merlab::srv::builder::Init_SendJointTrajectory_Event_info();
}

}  // namespace move_interfaces_merlab

#endif  // MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__BUILDER_HPP_
