// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_ros_msgs:msg/UR3eGripper.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__BUILDER_HPP_
#define UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unity_ros_msgs/msg/detail/ur3e_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unity_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_UR3eGripper_gripper
{
public:
  Init_UR3eGripper_gripper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_ros_msgs::msg::UR3eGripper gripper(::unity_ros_msgs::msg::UR3eGripper::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_ros_msgs::msg::UR3eGripper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_ros_msgs::msg::UR3eGripper>()
{
  return unity_ros_msgs::msg::builder::Init_UR3eGripper_gripper();
}

}  // namespace unity_ros_msgs

#endif  // UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__BUILDER_HPP_
