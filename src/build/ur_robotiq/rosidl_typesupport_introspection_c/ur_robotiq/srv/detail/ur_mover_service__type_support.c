// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_robotiq:srv/UrMoverService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_robotiq/srv/detail/ur_mover_service__rosidl_typesupport_introspection_c.h"
#include "ur_robotiq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_robotiq/srv/detail/ur_mover_service__functions.h"
#include "ur_robotiq/srv/detail/ur_mover_service__struct.h"


// Include directives for member types
// Member `joints_input`
#include "ur_robotiq/msg/ur3e_moveit_joints.h"
// Member `joints_input`
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__rosidl_typesupport_introspection_c.h"
// Member `pick_pose`
#include "geometry_msgs/msg/pose.h"
// Member `pick_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_robotiq__srv__UrMoverService_Request__init(message_memory);
}

void ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_fini_function(void * message_memory)
{
  ur_robotiq__srv__UrMoverService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_member_array[2] = {
  {
    "joints_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq__srv__UrMoverService_Request, joints_input),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pick_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq__srv__UrMoverService_Request, pick_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_members = {
  "ur_robotiq__srv",  // message namespace
  "UrMoverService_Request",  // message name
  2,  // number of fields
  sizeof(ur_robotiq__srv__UrMoverService_Request),
  ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_member_array,  // message members
  ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_type_support_handle = {
  0,
  &ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_robotiq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, srv, UrMoverService_Request)() {
  ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, msg, UR3eMoveitJoints)();
  ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_type_support_handle.typesupport_identifier) {
    ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_robotiq__srv__UrMoverService_Request__rosidl_typesupport_introspection_c__UrMoverService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_robotiq/srv/detail/ur_mover_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_robotiq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_robotiq/srv/detail/ur_mover_service__functions.h"
// already included above
// #include "ur_robotiq/srv/detail/ur_mover_service__struct.h"


// Include directives for member types
// Member `trajectories`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `trajectories`
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_robotiq__srv__UrMoverService_Response__init(message_memory);
}

void ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_fini_function(void * message_memory)
{
  ur_robotiq__srv__UrMoverService_Response__fini(message_memory);
}

size_t ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__size_function__UrMoverService_Response__trajectories(
  const void * untyped_member)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__get_const_function__UrMoverService_Response__trajectories(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__get_function__UrMoverService_Response__trajectories(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__fetch_function__UrMoverService_Response__trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__RobotTrajectory * item =
    ((const moveit_msgs__msg__RobotTrajectory *)
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__get_const_function__UrMoverService_Response__trajectories(untyped_member, index));
  moveit_msgs__msg__RobotTrajectory * value =
    (moveit_msgs__msg__RobotTrajectory *)(untyped_value);
  *value = *item;
}

void ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__assign_function__UrMoverService_Response__trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__RobotTrajectory * item =
    ((moveit_msgs__msg__RobotTrajectory *)
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__get_function__UrMoverService_Response__trajectories(untyped_member, index));
  const moveit_msgs__msg__RobotTrajectory * value =
    (const moveit_msgs__msg__RobotTrajectory *)(untyped_value);
  *item = *value;
}

bool ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__resize_function__UrMoverService_Response__trajectories(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(member);
  return moveit_msgs__msg__RobotTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_member_array[1] = {
  {
    "trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq__srv__UrMoverService_Response, trajectories),  // bytes offset in struct
    NULL,  // default value
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__size_function__UrMoverService_Response__trajectories,  // size() function pointer
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__get_const_function__UrMoverService_Response__trajectories,  // get_const(index) function pointer
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__get_function__UrMoverService_Response__trajectories,  // get(index) function pointer
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__fetch_function__UrMoverService_Response__trajectories,  // fetch(index, &value) function pointer
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__assign_function__UrMoverService_Response__trajectories,  // assign(index, value) function pointer
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__resize_function__UrMoverService_Response__trajectories  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_members = {
  "ur_robotiq__srv",  // message namespace
  "UrMoverService_Response",  // message name
  1,  // number of fields
  sizeof(ur_robotiq__srv__UrMoverService_Response),
  ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_member_array,  // message members
  ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_type_support_handle = {
  0,
  &ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_robotiq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, srv, UrMoverService_Response)() {
  ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  if (!ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_type_support_handle.typesupport_identifier) {
    ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_robotiq__srv__UrMoverService_Response__rosidl_typesupport_introspection_c__UrMoverService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_robotiq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_robotiq/srv/detail/ur_mover_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_service_members = {
  "ur_robotiq__srv",  // service namespace
  "UrMoverService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_Request_message_type_support_handle,
  NULL  // response message
  // ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_service_type_support_handle = {
  0,
  &ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, srv, UrMoverService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, srv, UrMoverService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_robotiq
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, srv, UrMoverService)() {
  if (!ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_service_type_support_handle.typesupport_identifier) {
    ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, srv, UrMoverService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, srv, UrMoverService_Response)()->data;
  }

  return &ur_robotiq__srv__detail__ur_mover_service__rosidl_typesupport_introspection_c__UrMoverService_service_type_support_handle;
}
