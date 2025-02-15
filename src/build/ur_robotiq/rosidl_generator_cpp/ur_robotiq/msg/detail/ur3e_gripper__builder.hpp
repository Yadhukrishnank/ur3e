// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_robotiq:msg/UR3eGripper.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__BUILDER_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_robotiq/msg/detail/ur3e_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_robotiq
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
  ::ur_robotiq::msg::UR3eGripper gripper(::ur_robotiq::msg::UR3eGripper::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_robotiq::msg::UR3eGripper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_robotiq::msg::UR3eGripper>()
{
  return ur_robotiq::msg::builder::Init_UR3eGripper_gripper();
}

}  // namespace ur_robotiq

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__BUILDER_HPP_
