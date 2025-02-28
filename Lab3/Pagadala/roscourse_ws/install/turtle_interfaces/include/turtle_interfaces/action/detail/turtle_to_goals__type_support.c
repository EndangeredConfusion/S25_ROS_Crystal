// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:action/TurtleToGoals.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
#include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


// Include directives for member types
// Member `goal_poses`
#include "geometry_msgs/msg/pose.h"
// Member `goal_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_Goal__init(message_memory);
}

void TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_Goal__fini(message_memory);
}

size_t TurtleToGoals_Goal__rosidl_typesupport_introspection_c__size_function__Pose__goal_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * TurtleToGoals_Goal__rosidl_typesupport_introspection_c__get_const_function__Pose__goal_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TurtleToGoals_Goal__rosidl_typesupport_introspection_c__get_function__Pose__goal_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TurtleToGoals_Goal__rosidl_typesupport_introspection_c__resize_function__Pose__goal_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_member_array[1] = {
  {
    "goal_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_Goal, goal_poses),  // bytes offset in struct
    NULL,  // default value
    TurtleToGoals_Goal__rosidl_typesupport_introspection_c__size_function__Pose__goal_poses,  // size() function pointer
    TurtleToGoals_Goal__rosidl_typesupport_introspection_c__get_const_function__Pose__goal_poses,  // get_const(index) function pointer
    TurtleToGoals_Goal__rosidl_typesupport_introspection_c__get_function__Pose__goal_poses,  // get(index) function pointer
    TurtleToGoals_Goal__rosidl_typesupport_introspection_c__resize_function__Pose__goal_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_Goal",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_Goal),
  TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_member_array,  // message members
  TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_type_support_handle = {
  0,
  &TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_Goal)() {
  TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_Goal__rosidl_typesupport_introspection_c__TurtleToGoals_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_Result__init(message_memory);
}

void TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_Result, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_Result",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_Result),
  TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_member_array,  // message members
  TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_type_support_handle = {
  0,
  &TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_Result)() {
  if (!TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_Result__rosidl_typesupport_introspection_c__TurtleToGoals_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


// Include directives for member types
// Member `mid_goal_pose`
// already included above
// #include "geometry_msgs/msg/pose.h"
// Member `mid_goal_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_Feedback__init(message_memory);
}

void TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_member_array[1] = {
  {
    "mid_goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_Feedback, mid_goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_Feedback",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_Feedback),
  TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_member_array,  // message members
  TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_type_support_handle = {
  0,
  &TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_Feedback)() {
  TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_Feedback__rosidl_typesupport_introspection_c__TurtleToGoals_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "turtle_interfaces/action/turtle_to_goals.h"
// Member `goal`
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_SendGoal_Request__init(message_memory);
}

void TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Request),
  TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_member_array,  // message members
  TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_type_support_handle = {
  0,
  &TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_SendGoal_Request)() {
  TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_Goal)();
  if (!TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_SendGoal_Request__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_SendGoal_Response__init(message_memory);
}

void TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Response),
  TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_member_array,  // message members
  TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_type_support_handle = {
  0,
  &TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_SendGoal_Response)() {
  TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_SendGoal_Response__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_service_members = {
  "turtle_interfaces__action",  // service namespace
  "TurtleToGoals_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_service_type_support_handle = {
  0,
  &turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_SendGoal)() {
  if (!turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_service_type_support_handle.typesupport_identifier) {
    turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_SendGoal_Response)()->data;
  }

  return &turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_GetResult_Request__init(message_memory);
}

void TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Request),
  TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_member_array,  // message members
  TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_type_support_handle = {
  0,
  &TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_GetResult_Request)() {
  TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_GetResult_Request__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "turtle_interfaces/action/turtle_to_goals.h"
// Member `result`
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_GetResult_Response__init(message_memory);
}

void TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Response),
  TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_member_array,  // message members
  TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_type_support_handle = {
  0,
  &TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_GetResult_Response)() {
  TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_Result)();
  if (!TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_GetResult_Response__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_service_members = {
  "turtle_interfaces__action",  // service namespace
  "TurtleToGoals_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_service_type_support_handle = {
  0,
  &turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_GetResult)() {
  if (!turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_service_type_support_handle.typesupport_identifier) {
    turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_GetResult_Response)()->data;
  }

  return &turtle_interfaces__action__detail__turtle_to_goals__rosidl_typesupport_introspection_c__TurtleToGoals_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "turtle_interfaces/action/turtle_to_goals.h"
// Member `feedback`
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__action__TurtleToGoals_FeedbackMessage__init(message_memory);
}

void TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_fini_function(void * message_memory)
{
  turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__action__TurtleToGoals_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_members = {
  "turtle_interfaces__action",  // message namespace
  "TurtleToGoals_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces__action__TurtleToGoals_FeedbackMessage),
  TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_member_array,  // message members
  TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_type_support_handle = {
  0,
  &TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_FeedbackMessage)() {
  TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, action, TurtleToGoals_Feedback)();
  if (!TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleToGoals_FeedbackMessage__rosidl_typesupport_introspection_c__TurtleToGoals_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
