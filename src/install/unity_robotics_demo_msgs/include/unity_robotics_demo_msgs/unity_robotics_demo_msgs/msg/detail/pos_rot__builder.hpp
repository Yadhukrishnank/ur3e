// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/PosRot.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_PosRot_joints
{
public:
  Init_PosRot_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_robotics_demo_msgs::msg::PosRot joints(::unity_robotics_demo_msgs::msg::PosRot::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::PosRot>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_PosRot_joints();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__BUILDER_HPP_
