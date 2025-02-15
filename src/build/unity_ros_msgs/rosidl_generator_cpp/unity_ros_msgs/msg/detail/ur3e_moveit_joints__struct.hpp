// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_ros_msgs:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_HPP_
#define UNITY_ROS_MSGS__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__unity_ros_msgs__msg__UR3eMoveitJoints __attribute__((deprecated))
#else
# define DEPRECATED__unity_ros_msgs__msg__UR3eMoveitJoints __declspec(deprecated)
#endif

namespace unity_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UR3eMoveitJoints_
{
  using Type = UR3eMoveitJoints_<ContainerAllocator>;

  explicit UR3eMoveitJoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->joints.begin(), this->joints.end(), 0.0);
    }
  }

  explicit UR3eMoveitJoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->joints.begin(), this->joints.end(), 0.0);
    }
  }

  // field types and members
  using _joints_type =
    std::array<double, 6>;
  _joints_type joints;

  // setters for named parameter idiom
  Type & set__joints(
    const std::array<double, 6> & _arg)
  {
    this->joints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_ros_msgs__msg__UR3eMoveitJoints
    std::shared_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_ros_msgs__msg__UR3eMoveitJoints
    std::shared_ptr<unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UR3eMoveitJoints_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const UR3eMoveitJoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UR3eMoveitJoints_

// alias to use template instance with default allocator
using UR3eMoveitJoints =
  unity_ros_msgs::msg::UR3eMoveitJoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_ros_msgs

#endif  // UNITY_ROS_MSGS__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_HPP_
