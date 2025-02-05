// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/Setpose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SETPOSE__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SETPOSE__BUILDER_HPP_

#include "turtle_interfaces/srv/detail/setpose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Setpose_Request_turtle_pose
{
public:
  Init_Setpose_Request_turtle_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::Setpose_Request turtle_pose(::turtle_interfaces::srv::Setpose_Request::_turtle_pose_type arg)
  {
    msg_.turtle_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::Setpose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::Setpose_Request>()
{
  return turtle_interfaces::srv::builder::Init_Setpose_Request_turtle_pose();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Setpose_Response_ret
{
public:
  Init_Setpose_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::Setpose_Response ret(::turtle_interfaces::srv::Setpose_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::Setpose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::Setpose_Response>()
{
  return turtle_interfaces::srv::builder::Init_Setpose_Response_ret();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SETPOSE__BUILDER_HPP_
