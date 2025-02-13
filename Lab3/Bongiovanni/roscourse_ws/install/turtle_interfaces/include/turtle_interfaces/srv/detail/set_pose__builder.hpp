// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__BUILDER_HPP_

#include "turtle_interfaces/srv/detail/set_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPose_Request_turtle_pose
{
public:
  Init_SetPose_Request_turtle_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::SetPose_Request turtle_pose(::turtle_interfaces::srv::SetPose_Request::_turtle_pose_type arg)
  {
    msg_.turtle_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetPose_Request>()
{
  return turtle_interfaces::srv::builder::Init_SetPose_Request_turtle_pose();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPose_Response_ret
{
public:
  Init_SetPose_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::SetPose_Response ret(::turtle_interfaces::srv::SetPose_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetPose_Response>()
{
  return turtle_interfaces::srv::builder::Init_SetPose_Response_ret();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__BUILDER_HPP_
