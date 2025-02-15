// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_robotiq:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice
#include "ur_robotiq/msg/detail/ur3e_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

bool
ur_robotiq__msg__UR3eTrajectory__init(ur_robotiq__msg__UR3eTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&msg->trajectory, 0)) {
    ur_robotiq__msg__UR3eTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
ur_robotiq__msg__UR3eTrajectory__fini(ur_robotiq__msg__UR3eTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(&msg->trajectory);
}

bool
ur_robotiq__msg__UR3eTrajectory__are_equal(const ur_robotiq__msg__UR3eTrajectory * lhs, const ur_robotiq__msg__UR3eTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  return true;
}

bool
ur_robotiq__msg__UR3eTrajectory__copy(
  const ur_robotiq__msg__UR3eTrajectory * input,
  ur_robotiq__msg__UR3eTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  return true;
}

ur_robotiq__msg__UR3eTrajectory *
ur_robotiq__msg__UR3eTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__msg__UR3eTrajectory * msg = (ur_robotiq__msg__UR3eTrajectory *)allocator.allocate(sizeof(ur_robotiq__msg__UR3eTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_robotiq__msg__UR3eTrajectory));
  bool success = ur_robotiq__msg__UR3eTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_robotiq__msg__UR3eTrajectory__destroy(ur_robotiq__msg__UR3eTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_robotiq__msg__UR3eTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_robotiq__msg__UR3eTrajectory__Sequence__init(ur_robotiq__msg__UR3eTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__msg__UR3eTrajectory * data = NULL;

  if (size) {
    data = (ur_robotiq__msg__UR3eTrajectory *)allocator.zero_allocate(size, sizeof(ur_robotiq__msg__UR3eTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_robotiq__msg__UR3eTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_robotiq__msg__UR3eTrajectory__fini(&data[i - 1]);
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
ur_robotiq__msg__UR3eTrajectory__Sequence__fini(ur_robotiq__msg__UR3eTrajectory__Sequence * array)
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
      ur_robotiq__msg__UR3eTrajectory__fini(&array->data[i]);
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

ur_robotiq__msg__UR3eTrajectory__Sequence *
ur_robotiq__msg__UR3eTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__msg__UR3eTrajectory__Sequence * array = (ur_robotiq__msg__UR3eTrajectory__Sequence *)allocator.allocate(sizeof(ur_robotiq__msg__UR3eTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_robotiq__msg__UR3eTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_robotiq__msg__UR3eTrajectory__Sequence__destroy(ur_robotiq__msg__UR3eTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_robotiq__msg__UR3eTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_robotiq__msg__UR3eTrajectory__Sequence__are_equal(const ur_robotiq__msg__UR3eTrajectory__Sequence * lhs, const ur_robotiq__msg__UR3eTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_robotiq__msg__UR3eTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_robotiq__msg__UR3eTrajectory__Sequence__copy(
  const ur_robotiq__msg__UR3eTrajectory__Sequence * input,
  ur_robotiq__msg__UR3eTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_robotiq__msg__UR3eTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_robotiq__msg__UR3eTrajectory * data =
      (ur_robotiq__msg__UR3eTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_robotiq__msg__UR3eTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_robotiq__msg__UR3eTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_robotiq__msg__UR3eTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
