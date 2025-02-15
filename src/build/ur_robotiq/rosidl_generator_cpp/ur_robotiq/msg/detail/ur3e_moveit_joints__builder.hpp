// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_robotiq:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__BUILDER_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_robotiq/msg/detail/ur3e_moveit_joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_robotiq
{

namespace msg
{

namespace builder
{

class Init_UR3eMoveitJoints_pick_pose
{
public:
  explicit Init_UR3eMoveitJoints_pick_pose(::ur_robotiq::msg::UR3eMoveitJoints & msg)
  : msg_(msg)
  {}
  ::ur_robotiq::msg::UR3eMoveitJoints pick_pose(::ur_robotiq::msg::UR3eMoveitJoints::_pick_pose_type arg)
  {
    msg_.pick_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_robotiq::msg::UR3eMoveitJoints msg_;
};

class Init_UR3eMoveitJoints_joints
{
public:
  Init_UR3eMoveitJoints_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UR3eMoveitJoints_pick_pose joints(::ur_robotiq::msg::UR3eMoveitJoints::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_UR3eMoveitJoints_pick_pose(msg_);
  }

private:
  ::ur_robotiq::msg::UR3eMoveitJoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_robotiq::msg::UR3eMoveitJoints>()
{
  return ur_robotiq::msg::builder::Init_UR3eMoveitJoints_joints();
}

}  // namespace ur_robotiq

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__BUILDER_HPP_
