// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/TurtleMsg.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TURTLE_MSG__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__TURTLE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'color'
#include "rosidl_runtime_c/string.h"
// Member 'turtle_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/TurtleMsg in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__TurtleMsg
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Pose turtle_pose;
  rosidl_runtime_c__String color;
} turtle_interfaces__msg__TurtleMsg;

// Struct for a sequence of turtle_interfaces__msg__TurtleMsg.
typedef struct turtle_interfaces__msg__TurtleMsg__Sequence
{
  turtle_interfaces__msg__TurtleMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__TurtleMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TURTLE_MSG__STRUCT_H_
