// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__STRUCT_H_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtle_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in srv/SetPose in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__SetPose_Request
{
  geometry_msgs__msg__PoseStamped turtle_pose;
} turtle_interfaces__srv__SetPose_Request;

// Struct for a sequence of turtle_interfaces__srv__SetPose_Request.
typedef struct turtle_interfaces__srv__SetPose_Request__Sequence
{
  turtle_interfaces__srv__SetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__SetPose_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetPose in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__SetPose_Response
{
  int8_t ret;
} turtle_interfaces__srv__SetPose_Response;

// Struct for a sequence of turtle_interfaces__srv__SetPose_Response.
typedef struct turtle_interfaces__srv__SetPose_Response__Sequence
{
  turtle_interfaces__srv__SetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__SetPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__STRUCT_H_
