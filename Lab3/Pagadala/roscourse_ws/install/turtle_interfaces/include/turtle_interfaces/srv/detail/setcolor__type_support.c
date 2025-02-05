// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:srv/Setcolor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/srv/detail/setcolor__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/srv/detail/setcolor__functions.h"
#include "turtle_interfaces/srv/detail/setcolor__struct.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__srv__Setcolor_Request__init(message_memory);
}

void Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_fini_function(void * message_memory)
{
  turtle_interfaces__srv__Setcolor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_member_array[1] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__srv__Setcolor_Request, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_members = {
  "turtle_interfaces__srv",  // message namespace
  "Setcolor_Request",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__srv__Setcolor_Request),
  Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_member_array,  // message members
  Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_type_support_handle = {
  0,
  &Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, Setcolor_Request)() {
  if (!Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_type_support_handle.typesupport_identifier) {
    Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Setcolor_Request__rosidl_typesupport_introspection_c__Setcolor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/srv/detail/setcolor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/srv/detail/setcolor__functions.h"
// already included above
// #include "turtle_interfaces/srv/detail/setcolor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__srv__Setcolor_Response__init(message_memory);
}

void Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_fini_function(void * message_memory)
{
  turtle_interfaces__srv__Setcolor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__srv__Setcolor_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_members = {
  "turtle_interfaces__srv",  // message namespace
  "Setcolor_Response",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__srv__Setcolor_Response),
  Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_member_array,  // message members
  Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_type_support_handle = {
  0,
  &Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, Setcolor_Response)() {
  if (!Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_type_support_handle.typesupport_identifier) {
    Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Setcolor_Response__rosidl_typesupport_introspection_c__Setcolor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtle_interfaces/srv/detail/setcolor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_service_members = {
  "turtle_interfaces__srv",  // service namespace
  "Setcolor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_Request_message_type_support_handle,
  NULL  // response message
  // turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_service_type_support_handle = {
  0,
  &turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, Setcolor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, Setcolor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, Setcolor)() {
  if (!turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_service_type_support_handle.typesupport_identifier) {
    turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, Setcolor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, Setcolor_Response)()->data;
  }

  return &turtle_interfaces__srv__detail__setcolor__rosidl_typesupport_introspection_c__Setcolor_service_type_support_handle;
}
