cmake_minimum_required(VERSION 3.8)
project(cppfile)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ur_description REQUIRED)
find_package(unity_robotics_demo_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)

include_directories(${unity_robotics_demo_msgs_INCLUDE_DIRS})

add_executable(position_pub src/position_pub.cpp)
ament_target_dependencies(position_pub
  rclcpp
  geometry_msgs
  unity_robotics_demo_msgs
  moveit_ros_planning_interface
)


add_executable(position_publisher src/position_publisher.cpp)
ament_target_dependencies(position_publisher
  rclcpp
  geometry_msgs
  unity_robotics_demo_msgs
  moveit_ros_planning_interface
)



add_executable(simple_moveit_interface src/simple_moveit_interface.cpp)
ament_target_dependencies(simple_moveit_interface
 rclcpp
 moveit_ros_planning_interface
)

install( TARGETS
  position_pub
  position_publisher
  simple_moveit_interface 
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
