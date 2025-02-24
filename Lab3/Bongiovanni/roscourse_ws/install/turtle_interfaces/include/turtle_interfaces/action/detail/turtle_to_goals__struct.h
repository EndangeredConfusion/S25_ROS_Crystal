// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:action/TurtleToGoals.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__STRUCT_H_
#define TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_Goal
{
  geometry_msgs__msg__Pose__Sequence goal_poses;
} turtle_interfaces__action__TurtleToGoals_Goal;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_Goal.
typedef struct turtle_interfaces__action__TurtleToGoals_Goal__Sequence
{
  turtle_interfaces__action__TurtleToGoals_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_Result
{
  int32_t ret;
} turtle_interfaces__action__TurtleToGoals_Result;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_Result.
typedef struct turtle_interfaces__action__TurtleToGoals_Result__Sequence
{
  turtle_interfaces__action__TurtleToGoals_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mid_goal_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_Feedback
{
  geometry_msgs__msg__Pose mid_goal_pose;
} turtle_interfaces__action__TurtleToGoals_Feedback;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_Feedback.
typedef struct turtle_interfaces__action__TurtleToGoals_Feedback__Sequence
{
  turtle_interfaces__action__TurtleToGoals_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_interfaces__action__TurtleToGoals_Goal goal;
} turtle_interfaces__action__TurtleToGoals_SendGoal_Request;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_SendGoal_Request.
typedef struct turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtle_interfaces__action__TurtleToGoals_SendGoal_Response;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_SendGoal_Response.
typedef struct turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtle_interfaces__action__TurtleToGoals_GetResult_Request;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_GetResult_Request.
typedef struct turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_GetResult_Response
{
  int8_t status;
  turtle_interfaces__action__TurtleToGoals_Result result;
} turtle_interfaces__action__TurtleToGoals_GetResult_Response;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_GetResult_Response.
typedef struct turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"

// Struct defined in action/TurtleToGoals in the package turtle_interfaces.
typedef struct turtle_interfaces__action__TurtleToGoals_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_interfaces__action__TurtleToGoals_Feedback feedback;
} turtle_interfaces__action__TurtleToGoals_FeedbackMessage;

// Struct for a sequence of turtle_interfaces__action__TurtleToGoals_FeedbackMessage.
typedef struct turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence
{
  turtle_interfaces__action__TurtleToGoals_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__STRUCT_H_
