// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_robotiq:srv/UrMoverService.idl
// generated code does not contain a copyright notice
#include "ur_robotiq/srv/detail/ur_mover_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_robotiq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_robotiq/srv/detail/ur_mover_service__struct.h"
#include "ur_robotiq/srv/detail/ur_mover_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // pick_pose
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__functions.h"  // joints_input

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_robotiq
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_robotiq
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_robotiq
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
size_t get_serialized_size_ur_robotiq__msg__UR3eMoveitJoints(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ur_robotiq__msg__UR3eMoveitJoints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_robotiq, msg, UR3eMoveitJoints)();


using _UrMoverService_Request__ros_msg_type = ur_robotiq__srv__UrMoverService_Request;

static bool _UrMoverService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UrMoverService_Request__ros_msg_type * ros_message = static_cast<const _UrMoverService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joints_input
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_robotiq, msg, UR3eMoveitJoints
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joints_input, cdr))
    {
      return false;
    }
  }

  // Field name: pick_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pick_pose, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _UrMoverService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UrMoverService_Request__ros_msg_type * ros_message = static_cast<_UrMoverService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joints_input
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_robotiq, msg, UR3eMoveitJoints
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joints_input))
    {
      return false;
    }
  }

  // Field name: pick_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pick_pose))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_robotiq
size_t get_serialized_size_ur_robotiq__srv__UrMoverService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UrMoverService_Request__ros_msg_type * ros_message = static_cast<const _UrMoverService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joints_input

  current_alignment += get_serialized_size_ur_robotiq__msg__UR3eMoveitJoints(
    &(ros_message->joints_input), current_alignment);
  // field.name pick_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pick_pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _UrMoverService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_robotiq__srv__UrMoverService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_robotiq
size_t max_serialized_size_ur_robotiq__srv__UrMoverService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joints_input
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ur_robotiq__msg__UR3eMoveitJoints(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pick_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_robotiq__srv__UrMoverService_Request;
    is_plain =
      (
      offsetof(DataType, pick_pose) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UrMoverService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_robotiq__srv__UrMoverService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UrMoverService_Request = {
  "ur_robotiq::srv",
  "UrMoverService_Request",
  _UrMoverService_Request__cdr_serialize,
  _UrMoverService_Request__cdr_deserialize,
  _UrMoverService_Request__get_serialized_size,
  _UrMoverService_Request__max_serialized_size
};

static rosidl_message_type_support_t _UrMoverService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UrMoverService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_robotiq, srv, UrMoverService_Request)() {
  return &_UrMoverService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ur_robotiq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ur_robotiq/srv/detail/ur_mover_service__struct.h"
// already included above
// #include "ur_robotiq/srv/detail/ur_mover_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"  // trajectories

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_robotiq
size_t get_serialized_size_moveit_msgs__msg__RobotTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_robotiq
size_t max_serialized_size_moveit_msgs__msg__RobotTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_robotiq
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotTrajectory)();


using _UrMoverService_Response__ros_msg_type = ur_robotiq__srv__UrMoverService_Response;

static bool _UrMoverService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UrMoverService_Response__ros_msg_type * ros_message = static_cast<const _UrMoverService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotTrajectory
      )()->data);
    size_t size = ros_message->trajectories.size;
    auto array_ptr = ros_message->trajectories.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _UrMoverService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UrMoverService_Response__ros_msg_type * ros_message = static_cast<_UrMoverService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotTrajectory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->trajectories.data) {
      moveit_msgs__msg__RobotTrajectory__Sequence__fini(&ros_message->trajectories);
    }
    if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&ros_message->trajectories, size)) {
      fprintf(stderr, "failed to create array for field 'trajectories'");
      return false;
    }
    auto array_ptr = ros_message->trajectories.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_robotiq
size_t get_serialized_size_ur_robotiq__srv__UrMoverService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UrMoverService_Response__ros_msg_type * ros_message = static_cast<const _UrMoverService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectories
  {
    size_t array_size = ros_message->trajectories.size;
    auto array_ptr = ros_message->trajectories.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__RobotTrajectory(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UrMoverService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_robotiq__srv__UrMoverService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_robotiq
size_t max_serialized_size_ur_robotiq__srv__UrMoverService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: trajectories
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__RobotTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_robotiq__srv__UrMoverService_Response;
    is_plain =
      (
      offsetof(DataType, trajectories) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UrMoverService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_robotiq__srv__UrMoverService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UrMoverService_Response = {
  "ur_robotiq::srv",
  "UrMoverService_Response",
  _UrMoverService_Response__cdr_serialize,
  _UrMoverService_Response__cdr_deserialize,
  _UrMoverService_Response__get_serialized_size,
  _UrMoverService_Response__max_serialized_size
};

static rosidl_message_type_support_t _UrMoverService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UrMoverService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_robotiq, srv, UrMoverService_Response)() {
  return &_UrMoverService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ur_robotiq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_robotiq/srv/ur_mover_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t UrMoverService__callbacks = {
  "ur_robotiq::srv",
  "UrMoverService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_robotiq, srv, UrMoverService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_robotiq, srv, UrMoverService_Response)(),
};

static rosidl_service_type_support_t UrMoverService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &UrMoverService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_robotiq, srv, UrMoverService)() {
  return &UrMoverService__handle;
}

#if defined(__cplusplus)
}
#endif
