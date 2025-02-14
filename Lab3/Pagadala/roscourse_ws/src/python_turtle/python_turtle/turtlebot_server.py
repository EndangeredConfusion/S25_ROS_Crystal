import rclpy
from rclpy.node import Node
import math
import time

from geometry_msgs.msg import Twist, Pose

from rclpy.action import ActionServer
from turtle_interfaces.action import TurtleToGoals

from turtle_interfaces.srv import Setcolor
from turtle_interfaces.msg import Turtlemsg

class TurtlebotServer(Node):
    def __init__(self):
        super().__init__('turtleServer')

        # initialize a turtle
        self.turtle = Turtlemsg()

        # publisher of turtlebot state
        self.turtle_pub = self.create_publisher(Turtlemsg, 'turtleState', 1)

        self.vel_x = 0 # velocty in x-direction (in the turtle frame), unit: pix/sec
        self.ang_vel = 0 # angular velicty in yaw-direction (in the turtle frame), unit: rad/sec


        #### subsciber to car cmd ####
        self.twist_sub = self.create_subscription(Twist, 'turtleDrive', self.twist_callback, 1)
        self.twist_sub
        #######################

        #### Driving Simulation Timer ####
        self.sim_interval = 0.02
        self.create_timer(self.sim_interval, self.driving_timer_cb)
        
        self.turtle_color_srv = self.create_service(Setcolor, 'setColor', self.set_color_callback)
        
        self.action_server = ActionServer(self, TurtleToGoals, 'go_to_goals',self.travel_to_goals_cb)
        
    def travel_to_goals_cb(self,goal_handle):
    	self.get_logger().info('To goals')
    	self.vel_x = 0
    	self.ang_vel = 0
    	feedback_msg = TurtleToGoals.Feedback()
    	for goal in goal_handle.request.goal_poses:
    		feedback_msg.mid_goal_pose = goal
    		goal_handle.publish_feedback(feedback_msg)
    		self.turtle.turtle_pose = goal
    		self.turtle_pub.publish(self.turtle)
    		time.sleep(2)
    	goal_handle.succeed()
    	result = TurtleToGoals.Result()
    	result.ret = 1
    	return result
    
    def set_color_callback(self, request, response):
        self.turtle.color = request.color 
        self.get_logger().info('Turtle color set: %s' % (self.turtle.color))
        response.ret = 1 
        return response

    def twist_callback(self, msg):

        self.vel_x = msg.linear.x
        self.ang_vel = msg.angular.z

    def driving_timer_cb(self):

        # convert quaternion to rpy
        roll, pitch, yaw = rpy_from_quat(self.turtle.turtle_pose.orientation.x,
                                        self.turtle.turtle_pose.orientation.y,
                                        self.turtle.turtle_pose.orientation.z,
                                        self.turtle.turtle_pose.orientation.w)

        # basic position/velocity physics
        new_x = self.turtle.turtle_pose.position.x + self.vel_x*self.sim_interval*math.cos(yaw)
        new_y = self.turtle.turtle_pose.position.y + self.vel_x*self.sim_interval*math.sin(yaw)
        new_yaw = yaw + self.ang_vel*self.sim_interval

        # assign to the turtle obj
        self.turtle.turtle_pose.position.x = new_x
        self.turtle.turtle_pose.position.y = new_y
        
        # convert to quaternion
        qx, qy, qz, qw = quat_from_rpy(0, 0, new_yaw)
        self.turtle.turtle_pose.orientation.x = qx
        self.turtle.turtle_pose.orientation.y = qy
        self.turtle.turtle_pose.orientation.z = qz
        self.turtle.turtle_pose.orientation.w = qw

        # publish new turtle state
        self.turtle_pub.publish(self.turtle)


def quat_from_rpy(roll, pitch, yaw):

    cy = math.cos(yaw*0.5)
    sy = math.sin(yaw*0.5)
    cp = math.cos(pitch*0.5)
    sp = math.sin(pitch*0.5)
    cr = math.cos(roll*0.5)
    sr = math.sin(roll*0.5)

    qw = cr * cp * cy + sr * sp * sy
    qx = sr * cp * cy - cr * sp * sy
    qy = cr * sp * cy + sr * cp * sy
    qz = cr * cp * sy - sr * sp * cy

    return qx, qy, qz, qw

def rpy_from_quat(x, y, z, w):

    srcp = 2*(w*x + y*z)
    crcp = 1-2*(x*x + y*y)
    roll = math.atan2(srcp, crcp)

    sp = 2*(w*y - z*x)
    if math.fabs(sp) >= 1:
        pitch = (sp/math.fabs(sp))*math.pi/2
    else:
        pitch = math.asin(sp)
    
    sycp = 2*(w*z + x*y)
    cycp = 1 - 2*(y*y + z*z)
    yaw = math.atan2(sycp, cycp)

    return roll, pitch, yaw

def main(args=None):

    #initial ros2
    rclpy.init(args=args)

    # initial turtlebotserver object
    ser_obj = TurtlebotServer()
    ser_obj.get_logger().info('Turtlebot server started!')

    # spin the node
    rclpy.spin(ser_obj)

    # Destroy the node explicitly
    ser_obj.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
