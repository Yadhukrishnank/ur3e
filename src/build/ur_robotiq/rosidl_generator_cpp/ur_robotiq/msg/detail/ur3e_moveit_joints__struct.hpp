// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_robotiq:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pick_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur_robotiq__msg__UR3eMoveitJoints __attribute__((deprecated))
#else
# define DEPRECATED__ur_robotiq__msg__UR3eMoveitJoints __declspec(deprecated)
#endif

namespace ur_robotiq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UR3eMoveitJoints_
{
  using Type = UR3eMoveitJoints_<ContainerAllocator>;

  explicit UR3eMoveitJoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pick_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->joints.begin(), this->joints.end(), 0.0);
    }
  }

  explicit UR3eMoveitJoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints(_alloc),
    pick_pose(_alloc, _init)
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
  using _pick_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pick_pose_type pick_pose;

  // setters for named parameter idiom
  Type & set__joints(
    const std::array<double, 6> & _arg)
  {
    this->joints = _arg;
    return *this;
  }
  Type & set__pick_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pick_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_robotiq__msg__UR3eMoveitJoints
    std::shared_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_robotiq__msg__UR3eMoveitJoints
    std::shared_ptr<ur_robotiq::msg::UR3eMoveitJoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UR3eMoveitJoints_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    if (this->pick_pose != other.pick_pose) {
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
  ur_robotiq::msg::UR3eMoveitJoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ur_robotiq

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_HPP_
