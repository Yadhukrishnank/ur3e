from setuptools import find_packages
from setuptools import setup

setup(
    name='unity_ros_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('unity_ros_msgs', 'unity_ros_msgs.*')),
)
