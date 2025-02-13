// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__TRAITS_HPP_

#include "turtle_interfaces/srv/detail/set_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'turtle_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetPose_Request>()
{
  return "turtle_interfaces::srv::SetPose_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::SetPose_Request>()
{
  return "turtle_interfaces/srv/SetPose_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetPose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetPose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<turtle_interfaces::srv::SetPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetPose_Response>()
{
  return "turtle_interfaces::srv::SetPose_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::SetPose_Response>()
{
  return "turtle_interfaces/srv/SetPose_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::SetPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetPose>()
{
  return "turtle_interfaces::srv::SetPose";
}

template<>
inline const char * name<turtle_interfaces::srv::SetPose>()
{
  return "turtle_interfaces/srv/SetPose";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetPose>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::SetPose_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::SetPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetPose>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::SetPose_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::SetPose_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::SetPose>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::SetPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::SetPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__TRAITS_HPP_
