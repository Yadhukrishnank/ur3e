// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_ros_msgs:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__BUILDER_HPP_
#define UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unity_ros_msgs/msg/detail/ur3e_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unity_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_UR3eTrajectory_trajectory
{
public:
  Init_UR3eTrajectory_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_ros_msgs::msg::UR3eTrajectory trajectory(::unity_ros_msgs::msg::UR3eTrajectory::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_ros_msgs::msg::UR3eTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_ros_msgs::msg::UR3eTrajectory>()
{
  return unity_ros_msgs::msg::builder::Init_UR3eTrajectory_trajectory();
}

}  // namespace unity_ros_msgs

#endif  // UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__BUILDER_HPP_
