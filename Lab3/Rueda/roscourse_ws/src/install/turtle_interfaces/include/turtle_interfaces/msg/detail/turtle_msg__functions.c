// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/TurtleMsg.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/turtle_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `color`
#include "rosidl_runtime_c/string_functions.h"
// Member `turtle_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
turtle_interfaces__msg__TurtleMsg__init(turtle_interfaces__msg__TurtleMsg * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
    return false;
  }
  // turtle_pose
  if (!geometry_msgs__msg__Pose__init(&msg->turtle_pose)) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__msg__TurtleMsg__fini(turtle_interfaces__msg__TurtleMsg * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // turtle_pose
  geometry_msgs__msg__Pose__fini(&msg->turtle_pose);
  // color
  rosidl_runtime_c__String__fini(&msg->color);
}

bool
turtle_interfaces__msg__TurtleMsg__are_equal(const turtle_interfaces__msg__TurtleMsg * lhs, const turtle_interfaces__msg__TurtleMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // turtle_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->turtle_pose), &(rhs->turtle_pose)))
  {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__TurtleMsg__copy(
  const turtle_interfaces__msg__TurtleMsg * input,
  turtle_interfaces__msg__TurtleMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // turtle_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->turtle_pose), &(output->turtle_pose)))
  {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

turtle_interfaces__msg__TurtleMsg *
turtle_interfaces__msg__TurtleMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__msg__TurtleMsg * msg = (turtle_interfaces__msg__TurtleMsg *)allocator.allocate(sizeof(turtle_interfaces__msg__TurtleMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__TurtleMsg));
  bool success = turtle_interfaces__msg__TurtleMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__TurtleMsg__destroy(turtle_interfaces__msg__TurtleMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_interfaces__msg__TurtleMsg__Sequence__init(turtle_interfaces__msg__TurtleMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__msg__TurtleMsg * data = NULL;

  if (size) {
    data = (turtle_interfaces__msg__TurtleMsg *)allocator.zero_allocate(size, sizeof(turtle_interfaces__msg__TurtleMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__TurtleMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__TurtleMsg__fini(&data[i - 1]);
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
turtle_interfaces__msg__TurtleMsg__Sequence__fini(turtle_interfaces__msg__TurtleMsg__Sequence * array)
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
      turtle_interfaces__msg__TurtleMsg__fini(&array->data[i]);
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

turtle_interfaces__msg__TurtleMsg__Sequence *
turtle_interfaces__msg__TurtleMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__msg__TurtleMsg__Sequence * array = (turtle_interfaces__msg__TurtleMsg__Sequence *)allocator.allocate(sizeof(turtle_interfaces__msg__TurtleMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__TurtleMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__TurtleMsg__Sequence__destroy(turtle_interfaces__msg__TurtleMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_interfaces__msg__TurtleMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_interfaces__msg__TurtleMsg__Sequence__are_equal(const turtle_interfaces__msg__TurtleMsg__Sequence * lhs, const turtle_interfaces__msg__TurtleMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__TurtleMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__TurtleMsg__Sequence__copy(
  const turtle_interfaces__msg__TurtleMsg__Sequence * input,
  turtle_interfaces__msg__TurtleMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__TurtleMsg);
    turtle_interfaces__msg__TurtleMsg * data =
      (turtle_interfaces__msg__TurtleMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__TurtleMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__TurtleMsg__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_interfaces__msg__TurtleMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
