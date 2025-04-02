from math import sin, cos, pi
import rclpy
import time
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Quaternion
from tf2_ros import TransformBroadcaster, TransformStamped
from rclpy.qos import QoSProfile

class StatePublisher(Node):

	def __init__(self):
		rclpy.init()
		super().__init__('state_publisher')
		
		qos_profile = QoSProfile(depth=30)
		
		self.joint_pub = self.create_publisher(JointState,'joint_states', qos_profile)
		self.broadcaster = TransformBroadcaster(self, qos=qos_profile)
		self.nodeName = self.get_name()
		self.get_logger().info("{0} started".format(self.nodeName))
		
		loop_rate = self.create_rate(60) #rate is in Hz
		
		#time.sleep(20)
		tstart = self.get_clock().now()
		telapse = 0.
		
		omega = 0.15 #rad/s
		angle = 0. #rad - determines car position
		omega_left = 2 #rad/s
		omega_right = 3 #rad/s
		
		# robot state
		left_wheel = 0. #rad
		right_wheel = 0. #rad
		
		# message declarations
		odom_trans = TransformStamped()
		odom_trans.header.frame_id = 'odom'
		odom_trans.child_frame_id = 'base_link'
		joint_state = JointState()
		
		try:
			while telapse<40:
				rclpy.spin_once(self)
				
				now = self.get_clock().now()
				telapse = now-tstart
				telapse = telapse.nanoseconds*10**-9
				#print(telapse)
				
				# update joint_state
				joint_state.header.stamp = now.to_msg()
				joint_state.name = ['base_left_wheel_joint', 'base_right_wheel_joint']
				left_wheel = omega_left*telapse
				right_wheel = omega_right*telapse
				joint_state.position = [left_wheel, right_wheel]
				
				# update transform
				angle = omega*telapse
				odom_trans.header.stamp = now.to_msg()
				odom_trans.transform.translation.x = cos(angle)
				odom_trans.transform.translation.y = sin(angle)+1
				odom_trans.transform.translation.z = 0.1
				odom_trans.transform.rotation = euler_to_quaternion(0, 0, angle+pi/2)
				#print(angle)
				
				# send the joint state and transform
				self.joint_pub.publish(joint_state)
				self.broadcaster.sendTransform(odom_trans)
				
				
				loop_rate.sleep()
				
		except KeyboardInterrupt:
			pass
			
def euler_to_quaternion(roll, pitch, yaw):
	qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
	qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
	qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
	qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
	return Quaternion(x=qx, y=qy, z=qz, w=qw)
    
def main():
	node = StatePublisher()
	
if __name__ == '__main__':
	main()
				
				
