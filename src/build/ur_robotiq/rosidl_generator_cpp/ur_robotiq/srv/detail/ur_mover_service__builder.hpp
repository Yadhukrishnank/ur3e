// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_robotiq:srv/UrMoverService.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__SRV__DETAIL__UR_MOVER_SERVICE__BUILDER_HPP_
#define UR_ROBOTIQ__SRV__DETAIL__UR_MOVER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_robotiq/srv/detail/ur_mover_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_robotiq
{

namespace srv
{

namespace builder
{

class Init_UrMoverService_Request_pick_pose
{
public:
  explicit Init_UrMoverService_Request_pick_pose(::ur_robotiq::srv::UrMoverService_Request & msg)
  : msg_(msg)
  {}
  ::ur_robotiq::srv::UrMoverService_Request pick_pose(::ur_robotiq::srv::UrMoverService_Request::_pick_pose_type arg)
  {
    msg_.pick_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_robotiq::srv::UrMoverService_Request msg_;
};

class Init_UrMoverService_Request_joints_input
{
public:
  Init_UrMoverService_Request_joints_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UrMoverService_Request_pick_pose joints_input(::ur_robotiq::srv::UrMoverService_Request::_joints_input_type arg)
  {
    msg_.joints_input = std::move(arg);
    return Init_UrMoverService_Request_pick_pose(msg_);
  }

private:
  ::ur_robotiq::srv::UrMoverService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_robotiq::srv::UrMoverService_Request>()
{
  return ur_robotiq::srv::builder::Init_UrMoverService_Request_joints_input();
}

}  // namespace ur_robotiq


namespace ur_robotiq
{

namespace srv
{

namespace builder
{

class Init_UrMoverService_Response_trajectories
{
public:
  Init_UrMoverService_Response_trajectories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_robotiq::srv::UrMoverService_Response trajectories(::ur_robotiq::srv::UrMoverService_Response::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_robotiq::srv::UrMoverService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_robotiq::srv::UrMoverService_Response>()
{
  return ur_robotiq::srv::builder::Init_UrMoverService_Response_trajectories();
}

}  // namespace ur_robotiq

#endif  // UR_ROBOTIQ__SRV__DETAIL__UR_MOVER_SERVICE__BUILDER_HPP_
