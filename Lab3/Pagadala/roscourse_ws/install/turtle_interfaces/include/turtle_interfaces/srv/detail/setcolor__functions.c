// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:srv/Setcolor.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/srv/detail/setcolor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_interfaces__srv__Setcolor_Request__init(turtle_interfaces__srv__Setcolor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    turtle_interfaces__srv__Setcolor_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__srv__Setcolor_Request__fini(turtle_interfaces__srv__Setcolor_Request * msg)
{
  if (!msg) {
    return;
  }
  // color
  rosidl_runtime_c__String__fini(&msg->color);
}

bool
turtle_interfaces__srv__Setcolor_Request__are_equal(const turtle_interfaces__srv__Setcolor_Request * lhs, const turtle_interfaces__srv__Setcolor_Request * rhs)
{
  if (!lhs || !rhs) {
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
turtle_interfaces__srv__Setcolor_Request__copy(
  const turtle_interfaces__srv__Setcolor_Request * input,
  turtle_interfaces__srv__Setcolor_Request * output)
{
  if (!input || !output) {
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

turtle_interfaces__srv__Setcolor_Request *
turtle_interfaces__srv__Setcolor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__Setcolor_Request * msg = (turtle_interfaces__srv__Setcolor_Request *)allocator.allocate(sizeof(turtle_interfaces__srv__Setcolor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__srv__Setcolor_Request));
  bool success = turtle_interfaces__srv__Setcolor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__srv__Setcolor_Request__destroy(turtle_interfaces__srv__Setcolor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_interfaces__srv__Setcolor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_interfaces__srv__Setcolor_Request__Sequence__init(turtle_interfaces__srv__Setcolor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__Setcolor_Request * data = NULL;

  if (size) {
    data = (turtle_interfaces__srv__Setcolor_Request *)allocator.zero_allocate(size, sizeof(turtle_interfaces__srv__Setcolor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__srv__Setcolor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__srv__Setcolor_Request__fini(&data[i - 1]);
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
turtle_interfaces__srv__Setcolor_Request__Sequence__fini(turtle_interfaces__srv__Setcolor_Request__Sequence * array)
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
      turtle_interfaces__srv__Setcolor_Request__fini(&array->data[i]);
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

turtle_interfaces__srv__Setcolor_Request__Sequence *
turtle_interfaces__srv__Setcolor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__Setcolor_Request__Sequence * array = (turtle_interfaces__srv__Setcolor_Request__Sequence *)allocator.allocate(sizeof(turtle_interfaces__srv__Setcolor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__srv__Setcolor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__srv__Setcolor_Request__Sequence__destroy(turtle_interfaces__srv__Setcolor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_interfaces__srv__Setcolor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_interfaces__srv__Setcolor_Request__Sequence__are_equal(const turtle_interfaces__srv__Setcolor_Request__Sequence * lhs, const turtle_interfaces__srv__Setcolor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__srv__Setcolor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__srv__Setcolor_Request__Sequence__copy(
  const turtle_interfaces__srv__Setcolor_Request__Sequence * input,
  turtle_interfaces__srv__Setcolor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__srv__Setcolor_Request);
    turtle_interfaces__srv__Setcolor_Request * data =
      (turtle_interfaces__srv__Setcolor_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__srv__Setcolor_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__srv__Setcolor_Request__fini(&data[i]);
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
    if (!turtle_interfaces__srv__Setcolor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtle_interfaces__srv__Setcolor_Response__init(turtle_interfaces__srv__Setcolor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
turtle_interfaces__srv__Setcolor_Response__fini(turtle_interfaces__srv__Setcolor_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

bool
turtle_interfaces__srv__Setcolor_Response__are_equal(const turtle_interfaces__srv__Setcolor_Response * lhs, const turtle_interfaces__srv__Setcolor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (lhs->ret != rhs->ret) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__srv__Setcolor_Response__copy(
  const turtle_interfaces__srv__Setcolor_Response * input,
  turtle_interfaces__srv__Setcolor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  return true;
}

turtle_interfaces__srv__Setcolor_Response *
turtle_interfaces__srv__Setcolor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__Setcolor_Response * msg = (turtle_interfaces__srv__Setcolor_Response *)allocator.allocate(sizeof(turtle_interfaces__srv__Setcolor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__srv__Setcolor_Response));
  bool success = turtle_interfaces__srv__Setcolor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__srv__Setcolor_Response__destroy(turtle_interfaces__srv__Setcolor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_interfaces__srv__Setcolor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_interfaces__srv__Setcolor_Response__Sequence__init(turtle_interfaces__srv__Setcolor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__Setcolor_Response * data = NULL;

  if (size) {
    data = (turtle_interfaces__srv__Setcolor_Response *)allocator.zero_allocate(size, sizeof(turtle_interfaces__srv__Setcolor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__srv__Setcolor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__srv__Setcolor_Response__fini(&data[i - 1]);
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
turtle_interfaces__srv__Setcolor_Response__Sequence__fini(turtle_interfaces__srv__Setcolor_Response__Sequence * array)
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
      turtle_interfaces__srv__Setcolor_Response__fini(&array->data[i]);
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

turtle_interfaces__srv__Setcolor_Response__Sequence *
turtle_interfaces__srv__Setcolor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__Setcolor_Response__Sequence * array = (turtle_interfaces__srv__Setcolor_Response__Sequence *)allocator.allocate(sizeof(turtle_interfaces__srv__Setcolor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__srv__Setcolor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__srv__Setcolor_Response__Sequence__destroy(turtle_interfaces__srv__Setcolor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_interfaces__srv__Setcolor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_interfaces__srv__Setcolor_Response__Sequence__are_equal(const turtle_interfaces__srv__Setcolor_Response__Sequence * lhs, const turtle_interfaces__srv__Setcolor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__srv__Setcolor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__srv__Setcolor_Response__Sequence__copy(
  const turtle_interfaces__srv__Setcolor_Response__Sequence * input,
  turtle_interfaces__srv__Setcolor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__srv__Setcolor_Response);
    turtle_interfaces__srv__Setcolor_Response * data =
      (turtle_interfaces__srv__Setcolor_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__srv__Setcolor_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__srv__Setcolor_Response__fini(&data[i]);
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
    if (!turtle_interfaces__srv__Setcolor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
