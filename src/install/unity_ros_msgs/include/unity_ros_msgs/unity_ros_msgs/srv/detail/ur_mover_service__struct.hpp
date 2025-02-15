// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_ros_msgs:srv/UrMoverService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_HPP_
#define UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joints_input'
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__struct.hpp"
// Member 'pick_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unity_ros_msgs__srv__UrMoverService_Request __attribute__((deprecated))
#else
# define DEPRECATED__unity_ros_msgs__srv__UrMoverService_Request __declspec(deprecated)
#endif

namespace unity_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UrMoverService_Request_
{
  using Type = UrMoverService_Request_<ContainerAllocator>;

  explicit UrMoverService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints_input(_init),
    pick_pose(_init)
  {
    (void)_init;
  }

  explicit UrMoverService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints_input(_alloc, _init),
    pick_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joints_input_type =
    unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator>;
  _joints_input_type joints_input;
  using _pick_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pick_pose_type pick_pose;

  // setters for named parameter idiom
  Type & set__joints_input(
    const unity_ros_msgs::msg::UR3eMoveitJoints_<ContainerAllocator> & _arg)
  {
    this->joints_input = _arg;
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
    unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_ros_msgs__srv__UrMoverService_Request
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_ros_msgs__srv__UrMoverService_Request
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UrMoverService_Request_ & other) const
  {
    if (this->joints_input != other.joints_input) {
      return false;
    }
    if (this->pick_pose != other.pick_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const UrMoverService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UrMoverService_Request_

// alias to use template instance with default allocator
using UrMoverService_Request =
  unity_ros_msgs::srv::UrMoverService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace unity_ros_msgs


// Include directives for member types
// Member 'trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unity_ros_msgs__srv__UrMoverService_Response __attribute__((deprecated))
#else
# define DEPRECATED__unity_ros_msgs__srv__UrMoverService_Response __declspec(deprecated)
#endif

namespace unity_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UrMoverService_Response_
{
  using Type = UrMoverService_Response_<ContainerAllocator>;

  explicit UrMoverService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit UrMoverService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _trajectories_type =
    std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>;
  _trajectories_type trajectories;

  // setters for named parameter idiom
  Type & set__trajectories(
    const std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_ros_msgs__srv__UrMoverService_Response
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_ros_msgs__srv__UrMoverService_Response
    std::shared_ptr<unity_ros_msgs::srv::UrMoverService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UrMoverService_Response_ & other) const
  {
    if (this->trajectories != other.trajectories) {
      return false;
    }
    return true;
  }
  bool operator!=(const UrMoverService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UrMoverService_Response_

// alias to use template instance with default allocator
using UrMoverService_Response =
  unity_ros_msgs::srv::UrMoverService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace unity_ros_msgs

namespace unity_ros_msgs
{

namespace srv
{

struct UrMoverService
{
  using Request = unity_ros_msgs::srv::UrMoverService_Request;
  using Response = unity_ros_msgs::srv::UrMoverService_Response;
};

}  // namespace srv

}  // namespace unity_ros_msgs

#endif  // UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_HPP_
