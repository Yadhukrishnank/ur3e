// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_ros_msgs:srv/UrMoverService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__TRAITS_HPP_
#define UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unity_ros_msgs/srv/detail/ur_mover_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joints_input'
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__traits.hpp"
// Member 'pick_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace unity_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UrMoverService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints_input
  {
    out << "joints_input: ";
    to_flow_style_yaml(msg.joints_input, out);
    out << ", ";
  }

  // member: pick_pose
  {
    out << "pick_pose: ";
    to_flow_style_yaml(msg.pick_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UrMoverService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joints_input:\n";
    to_block_style_yaml(msg.joints_input, out, indentation + 2);
  }

  // member: pick_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_pose:\n";
    to_block_style_yaml(msg.pick_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UrMoverService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace unity_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use unity_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unity_ros_msgs::srv::UrMoverService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  unity_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unity_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const unity_ros_msgs::srv::UrMoverService_Request & msg)
{
  return unity_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<unity_ros_msgs::srv::UrMoverService_Request>()
{
  return "unity_ros_msgs::srv::UrMoverService_Request";
}

template<>
inline const char * name<unity_ros_msgs::srv::UrMoverService_Request>()
{
  return "unity_ros_msgs/srv/UrMoverService_Request";
}

template<>
struct has_fixed_size<unity_ros_msgs::srv::UrMoverService_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<unity_ros_msgs::msg::UR3eMoveitJoints>::value> {};

template<>
struct has_bounded_size<unity_ros_msgs::srv::UrMoverService_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<unity_ros_msgs::msg::UR3eMoveitJoints>::value> {};

template<>
struct is_message<unity_ros_msgs::srv::UrMoverService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace unity_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UrMoverService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectories
  {
    if (msg.trajectories.size() == 0) {
      out << "trajectories: []";
    } else {
      out << "trajectories: [";
      size_t pending_items = msg.trajectories.size();
      for (auto item : msg.trajectories) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UrMoverService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectories.size() == 0) {
      out << "trajectories: []\n";
    } else {
      out << "trajectories:\n";
      for (auto item : msg.trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UrMoverService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace unity_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use unity_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unity_ros_msgs::srv::UrMoverService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  unity_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unity_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const unity_ros_msgs::srv::UrMoverService_Response & msg)
{
  return unity_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<unity_ros_msgs::srv::UrMoverService_Response>()
{
  return "unity_ros_msgs::srv::UrMoverService_Response";
}

template<>
inline const char * name<unity_ros_msgs::srv::UrMoverService_Response>()
{
  return "unity_ros_msgs/srv/UrMoverService_Response";
}

template<>
struct has_fixed_size<unity_ros_msgs::srv::UrMoverService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unity_ros_msgs::srv::UrMoverService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unity_ros_msgs::srv::UrMoverService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_ros_msgs::srv::UrMoverService>()
{
  return "unity_ros_msgs::srv::UrMoverService";
}

template<>
inline const char * name<unity_ros_msgs::srv::UrMoverService>()
{
  return "unity_ros_msgs/srv/UrMoverService";
}

template<>
struct has_fixed_size<unity_ros_msgs::srv::UrMoverService>
  : std::integral_constant<
    bool,
    has_fixed_size<unity_ros_msgs::srv::UrMoverService_Request>::value &&
    has_fixed_size<unity_ros_msgs::srv::UrMoverService_Response>::value
  >
{
};

template<>
struct has_bounded_size<unity_ros_msgs::srv::UrMoverService>
  : std::integral_constant<
    bool,
    has_bounded_size<unity_ros_msgs::srv::UrMoverService_Request>::value &&
    has_bounded_size<unity_ros_msgs::srv::UrMoverService_Response>::value
  >
{
};

template<>
struct is_service<unity_ros_msgs::srv::UrMoverService>
  : std::true_type
{
};

template<>
struct is_service_request<unity_ros_msgs::srv::UrMoverService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<unity_ros_msgs::srv::UrMoverService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__TRAITS_HPP_
