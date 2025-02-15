// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_robotiq:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__BUILDER_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_robotiq/msg/detail/ur3e_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_robotiq
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
  ::ur_robotiq::msg::UR3eTrajectory trajectory(::ur_robotiq::msg::UR3eTrajectory::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_robotiq::msg::UR3eTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_robotiq::msg::UR3eTrajectory>()
{
  return ur_robotiq::msg::builder::Init_UR3eTrajectory_trajectory();
}

}  // namespace ur_robotiq

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__BUILDER_HPP_
