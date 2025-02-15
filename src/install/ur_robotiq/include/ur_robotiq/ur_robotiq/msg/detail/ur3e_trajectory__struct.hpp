// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_robotiq:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__STRUCT_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur_robotiq__msg__UR3eTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__ur_robotiq__msg__UR3eTrajectory __declspec(deprecated)
#endif

namespace ur_robotiq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UR3eTrajectory_
{
  using Type = UR3eTrajectory_<ContainerAllocator>;

  explicit UR3eTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit UR3eTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _trajectory_type =
    std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__trajectory(
    const std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_robotiq__msg__UR3eTrajectory
    std::shared_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_robotiq__msg__UR3eTrajectory
    std::shared_ptr<ur_robotiq::msg::UR3eTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UR3eTrajectory_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const UR3eTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UR3eTrajectory_

// alias to use template instance with default allocator
using UR3eTrajectory =
  ur_robotiq::msg::UR3eTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ur_robotiq

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__STRUCT_HPP_
