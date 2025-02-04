// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/Setpose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SETPOSE__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SETPOSE__TRAITS_HPP_

#include "turtle_interfaces/srv/detail/setpose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'turtle_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::Setpose_Request>()
{
  return "turtle_interfaces::srv::Setpose_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::Setpose_Request>()
{
  return "turtle_interfaces/srv/Setpose_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::Setpose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::Setpose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<turtle_interfaces::srv::Setpose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::Setpose_Response>()
{
  return "turtle_interfaces::srv::Setpose_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::Setpose_Response>()
{
  return "turtle_interfaces/srv/Setpose_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::Setpose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::Setpose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::Setpose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::Setpose>()
{
  return "turtle_interfaces::srv::Setpose";
}

template<>
inline const char * name<turtle_interfaces::srv::Setpose>()
{
  return "turtle_interfaces/srv/Setpose";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::Setpose>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::Setpose_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::Setpose_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::Setpose>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::Setpose_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::Setpose_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::Setpose>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::Setpose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::Setpose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SETPOSE__TRAITS_HPP_
