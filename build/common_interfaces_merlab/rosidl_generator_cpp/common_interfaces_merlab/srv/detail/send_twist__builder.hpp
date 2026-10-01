// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_interfaces_merlab:srv/SendTwist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "common_interfaces_merlab/srv/send_twist.hpp"


#ifndef COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__BUILDER_HPP_
#define COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "common_interfaces_merlab/srv/detail/send_twist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendTwist_Request_twist
{
public:
  Init_SendTwist_Request_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_interfaces_merlab::srv::SendTwist_Request twist(::common_interfaces_merlab::srv::SendTwist_Request::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendTwist_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendTwist_Request>()
{
  return common_interfaces_merlab::srv::builder::Init_SendTwist_Request_twist();
}

}  // namespace common_interfaces_merlab


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendTwist_Response_message
{
public:
  explicit Init_SendTwist_Response_message(::common_interfaces_merlab::srv::SendTwist_Response & msg)
  : msg_(msg)
  {}
  ::common_interfaces_merlab::srv::SendTwist_Response message(::common_interfaces_merlab::srv::SendTwist_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendTwist_Response msg_;
};

class Init_SendTwist_Response_success
{
public:
  Init_SendTwist_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendTwist_Response_message success(::common_interfaces_merlab::srv::SendTwist_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SendTwist_Response_message(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendTwist_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendTwist_Response>()
{
  return common_interfaces_merlab::srv::builder::Init_SendTwist_Response_success();
}

}  // namespace common_interfaces_merlab


namespace common_interfaces_merlab
{

namespace srv
{

namespace builder
{

class Init_SendTwist_Event_response
{
public:
  explicit Init_SendTwist_Event_response(::common_interfaces_merlab::srv::SendTwist_Event & msg)
  : msg_(msg)
  {}
  ::common_interfaces_merlab::srv::SendTwist_Event response(::common_interfaces_merlab::srv::SendTwist_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendTwist_Event msg_;
};

class Init_SendTwist_Event_request
{
public:
  explicit Init_SendTwist_Event_request(::common_interfaces_merlab::srv::SendTwist_Event & msg)
  : msg_(msg)
  {}
  Init_SendTwist_Event_response request(::common_interfaces_merlab::srv::SendTwist_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendTwist_Event_response(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendTwist_Event msg_;
};

class Init_SendTwist_Event_info
{
public:
  Init_SendTwist_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendTwist_Event_request info(::common_interfaces_merlab::srv::SendTwist_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendTwist_Event_request(msg_);
  }

private:
  ::common_interfaces_merlab::srv::SendTwist_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_interfaces_merlab::srv::SendTwist_Event>()
{
  return common_interfaces_merlab::srv::builder::Init_SendTwist_Event_info();
}

}  // namespace common_interfaces_merlab

#endif  // COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__BUILDER_HPP_
