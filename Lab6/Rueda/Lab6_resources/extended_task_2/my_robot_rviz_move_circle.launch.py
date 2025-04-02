import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration
from launch.conditions import IfCondition, UnlessCondition
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():

    my_robot_path = get_package_share_directory('my_robot')
    urdf = os.path.join(my_robot_path , 'my_robot.urdf')
    rviz_config = os.path.join(my_robot_path, 'my_robot_move_circle.rviz')
    #rviz_config = '/home/yahboom/roscourse_sim_ws/src/my_robot/rviz/my_robot.rviz'
    
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    
    sim_time_arg = DeclareLaunchArgument(
            name='use_sim_time',
            default_value='false', choices=['true','false'],
            description='Use simulation (Gazebo) clock if true')
    
            
    rviz_arg = DeclareLaunchArgument(name='rvizconfig', default_value=str(rviz_config),
                                     description='Absolute path to rviz config file')

    with open(urdf, 'r') as infp:
        robot_desc = infp.read()
        
        
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time, 'robot_description': robot_desc}],
        arguments=[urdf])
        
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')])
        
    circle_move = Node(
    	package='my_robot',
    	executable='move_in_circle',
    	name='move_in_circle',
    	output='screen')

    return LaunchDescription([
        sim_time_arg,
        rviz_arg,
        robot_state_publisher_node,
        rviz_node,
        circle_move
    ])
