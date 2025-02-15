// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_ros_msgs:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pick_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
unity_ros_msgs__msg__UR3eMoveitJoints__init(unity_ros_msgs__msg__UR3eMoveitJoints * msg)
{
  if (!msg) {
    return false;
  }
  // joints
  // pick_pose
  if (!geometry_msgs__msg__Pose__init(&msg->pick_pose)) {
    unity_ros_msgs__msg__UR3eMoveitJoints__fini(msg);
    return false;
  }
  return true;
}

void
unity_ros_msgs__msg__UR3eMoveitJoints__fini(unity_ros_msgs__msg__UR3eMoveitJoints * msg)
{
  if (!msg) {
    return;
  }
  // joints
  // pick_pose
  geometry_msgs__msg__Pose__fini(&msg->pick_pose);
}

bool
unity_ros_msgs__msg__UR3eMoveitJoints__are_equal(const unity_ros_msgs__msg__UR3eMoveitJoints * lhs, const unity_ros_msgs__msg__UR3eMoveitJoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joints
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->joints[i] != rhs->joints[i]) {
      return false;
    }
  }
  // pick_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pick_pose), &(rhs->pick_pose)))
  {
    return false;
  }
  return true;
}

bool
unity_ros_msgs__msg__UR3eMoveitJoints__copy(
  const unity_ros_msgs__msg__UR3eMoveitJoints * input,
  unity_ros_msgs__msg__UR3eMoveitJoints * output)
{
  if (!input || !output) {
    return false;
  }
  // joints
  for (size_t i = 0; i < 6; ++i) {
    output->joints[i] = input->joints[i];
  }
  // pick_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pick_pose), &(output->pick_pose)))
  {
    return false;
  }
  return true;
}

unity_ros_msgs__msg__UR3eMoveitJoints *
unity_ros_msgs__msg__UR3eMoveitJoints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__msg__UR3eMoveitJoints * msg = (unity_ros_msgs__msg__UR3eMoveitJoints *)allocator.allocate(sizeof(unity_ros_msgs__msg__UR3eMoveitJoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_ros_msgs__msg__UR3eMoveitJoints));
  bool success = unity_ros_msgs__msg__UR3eMoveitJoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_ros_msgs__msg__UR3eMoveitJoints__destroy(unity_ros_msgs__msg__UR3eMoveitJoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_ros_msgs__msg__UR3eMoveitJoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__init(unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__msg__UR3eMoveitJoints * data = NULL;

  if (size) {
    data = (unity_ros_msgs__msg__UR3eMoveitJoints *)allocator.zero_allocate(size, sizeof(unity_ros_msgs__msg__UR3eMoveitJoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_ros_msgs__msg__UR3eMoveitJoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_ros_msgs__msg__UR3eMoveitJoints__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__fini(unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unity_ros_msgs__msg__UR3eMoveitJoints__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

unity_ros_msgs__msg__UR3eMoveitJoints__Sequence *
unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * array = (unity_ros_msgs__msg__UR3eMoveitJoints__Sequence *)allocator.allocate(sizeof(unity_ros_msgs__msg__UR3eMoveitJoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__destroy(unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__are_equal(const unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * lhs, const unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_ros_msgs__msg__UR3eMoveitJoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_ros_msgs__msg__UR3eMoveitJoints__Sequence__copy(
  const unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * input,
  unity_ros_msgs__msg__UR3eMoveitJoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_ros_msgs__msg__UR3eMoveitJoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unity_ros_msgs__msg__UR3eMoveitJoints * data =
      (unity_ros_msgs__msg__UR3eMoveitJoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_ros_msgs__msg__UR3eMoveitJoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unity_ros_msgs__msg__UR3eMoveitJoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unity_ros_msgs__msg__UR3eMoveitJoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
