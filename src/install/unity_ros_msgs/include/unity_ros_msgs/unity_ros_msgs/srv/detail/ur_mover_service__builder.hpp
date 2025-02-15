// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_ros_msgs:srv/UrMoverService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__BUILDER_HPP_
#define UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unity_ros_msgs/srv/detail/ur_mover_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unity_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_UrMoverService_Request_pick_pose
{
public:
  explicit Init_UrMoverService_Request_pick_pose(::unity_ros_msgs::srv::UrMoverService_Request & msg)
  : msg_(msg)
  {}
  ::unity_ros_msgs::srv::UrMoverService_Request pick_pose(::unity_ros_msgs::srv::UrMoverService_Request::_pick_pose_type arg)
  {
    msg_.pick_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_ros_msgs::srv::UrMoverService_Request msg_;
};

class Init_UrMoverService_Request_joints_input
{
public:
  Init_UrMoverService_Request_joints_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UrMoverService_Request_pick_pose joints_input(::unity_ros_msgs::srv::UrMoverService_Request::_joints_input_type arg)
  {
    msg_.joints_input = std::move(arg);
    return Init_UrMoverService_Request_pick_pose(msg_);
  }

private:
  ::unity_ros_msgs::srv::UrMoverService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_ros_msgs::srv::UrMoverService_Request>()
{
  return unity_ros_msgs::srv::builder::Init_UrMoverService_Request_joints_input();
}

}  // namespace unity_ros_msgs


namespace unity_ros_msgs
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
  ::unity_ros_msgs::srv::UrMoverService_Response trajectories(::unity_ros_msgs::srv::UrMoverService_Response::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_ros_msgs::srv::UrMoverService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_ros_msgs::srv::UrMoverService_Response>()
{
  return unity_ros_msgs::srv::builder::Init_UrMoverService_Response_trajectories();
}

}  // namespace unity_ros_msgs

#endif  // UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__BUILDER_HPP_
