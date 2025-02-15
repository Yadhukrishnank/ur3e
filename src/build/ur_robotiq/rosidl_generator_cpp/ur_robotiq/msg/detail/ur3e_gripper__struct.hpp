// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_robotiq:msg/UR3eGripper.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__STRUCT_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_robotiq__msg__UR3eGripper __attribute__((deprecated))
#else
# define DEPRECATED__ur_robotiq__msg__UR3eGripper __declspec(deprecated)
#endif

namespace ur_robotiq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UR3eGripper_
{
  using Type = UR3eGripper_<ContainerAllocator>;

  explicit UR3eGripper_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper = 0.0;
    }
  }

  explicit UR3eGripper_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper = 0.0;
    }
  }

  // field types and members
  using _gripper_type =
    double;
  _gripper_type gripper;

  // setters for named parameter idiom
  Type & set__gripper(
    const double & _arg)
  {
    this->gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_robotiq::msg::UR3eGripper_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_robotiq::msg::UR3eGripper_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_robotiq::msg::UR3eGripper_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_robotiq::msg::UR3eGripper_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_robotiq__msg__UR3eGripper
    std::shared_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_robotiq__msg__UR3eGripper
    std::shared_ptr<ur_robotiq::msg::UR3eGripper_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UR3eGripper_ & other) const
  {
    if (this->gripper != other.gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const UR3eGripper_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UR3eGripper_

// alias to use template instance with default allocator
using UR3eGripper =
  ur_robotiq::msg::UR3eGripper_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ur_robotiq

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__STRUCT_HPP_
