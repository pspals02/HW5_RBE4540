// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_interfaces_merlab:srv/SendJointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "common_interfaces_merlab/srv/send_joint_trajectory.hpp"


#ifndef COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__STRUCT_HPP_
#define COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal_points'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Request __declspec(deprecated)
#endif

namespace common_interfaces_merlab
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendJointTrajectory_Request_
{
  using Type = SendJointTrajectory_Request_<ContainerAllocator>;

  explicit SendJointTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_points(_init)
  {
    (void)_init;
  }

  explicit SendJointTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_points(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_points_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _goal_points_type goal_points;

  // setters for named parameter idiom
  Type & set__goal_points(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->goal_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Request
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Request
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendJointTrajectory_Request_ & other) const
  {
    if (this->goal_points != other.goal_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendJointTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendJointTrajectory_Request_

// alias to use template instance with default allocator
using SendJointTrajectory_Request =
  common_interfaces_merlab::srv::SendJointTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace common_interfaces_merlab


#ifndef _WIN32
# define DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Response __declspec(deprecated)
#endif

namespace common_interfaces_merlab
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendJointTrajectory_Response_
{
  using Type = SendJointTrajectory_Response_<ContainerAllocator>;

  explicit SendJointTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SendJointTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Response
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Response
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendJointTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendJointTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendJointTrajectory_Response_

// alias to use template instance with default allocator
using SendJointTrajectory_Response =
  common_interfaces_merlab::srv::SendJointTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace common_interfaces_merlab


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Event __attribute__((deprecated))
#else
# define DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Event __declspec(deprecated)
#endif

namespace common_interfaces_merlab
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendJointTrajectory_Event_
{
  using Type = SendJointTrajectory_Event_<ContainerAllocator>;

  explicit SendJointTrajectory_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SendJointTrajectory_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<common_interfaces_merlab::srv::SendJointTrajectory_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<common_interfaces_merlab::srv::SendJointTrajectory_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Event
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_interfaces_merlab__srv__SendJointTrajectory_Event
    std::shared_ptr<common_interfaces_merlab::srv::SendJointTrajectory_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendJointTrajectory_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendJointTrajectory_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendJointTrajectory_Event_

// alias to use template instance with default allocator
using SendJointTrajectory_Event =
  common_interfaces_merlab::srv::SendJointTrajectory_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace common_interfaces_merlab

namespace common_interfaces_merlab
{

namespace srv
{

struct SendJointTrajectory
{
  using Request = common_interfaces_merlab::srv::SendJointTrajectory_Request;
  using Response = common_interfaces_merlab::srv::SendJointTrajectory_Response;
  using Event = common_interfaces_merlab::srv::SendJointTrajectory_Event;
};

}  // namespace srv

}  // namespace common_interfaces_merlab

#endif  // COMMON_INTERFACES_MERLAB__SRV__DETAIL__SEND_JOINT_TRAJECTORY__STRUCT_HPP_
