cmake_minimum_required(VERSION 2.8.3)
project(robocupcpp)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
  INCLUDE_DIRS 
    include
  CATKIN_DEPENDS
    roscpp
  LIBRARIES
		robocupcpp
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE)

add_library(robocupcpp
	include/${PROJECT_NAME}/i2c.h
	include/${PROJECT_NAME}/serial.h
	include/${PROJECT_NAME}/robocup.h
	include/${PROJECT_NAME}/segment.h
	include/${PROJECT_NAME}/joint.h
	src/i2c.cpp
	src/serial.cpp
	src/robocup.cpp
	src/arm.cpp
	src/joint.cpp
)
target_link_libraries(robocupcpp ${catkin_LIBRARIES})
