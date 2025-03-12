from setuptools import setup

import os
from glob import glob
# EDIT, 2/26, 12:00AM -- added two imports shown above
# REASON: Needed for creating a launch file

package_name = 'python_turtle'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name,'launch'),
            glob(os.path.join('launch','*launch.[pxy][yma]*'))),
	# EDIT, 2/26, 12:00AM -- added three lines shown above
	# REASON: tells build process to look for launch files within this package directory inside a folder called launch
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yahboom',
    maintainer_email='ruedam@rpi.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	 'turtlebot_server = python_turtle.turtlebot_server:main',
        	 'turtlebot_client = python_turtle.turtlebot_client:main',
        	 'turtlebot_client_old = python_turtle.turtlebot_client_old:main',
        	 'service_client = python_turtle.service_client:main'
        ],
    },
)
