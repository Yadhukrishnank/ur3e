from setuptools import find_packages
from setuptools import setup

setup(
    name='ur_robotiq',
    version='0.0.0',
    packages=find_packages(
        include=('ur_robotiq', 'ur_robotiq.*')),
)
