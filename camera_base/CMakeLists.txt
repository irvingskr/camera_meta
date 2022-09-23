cmake_minimum_required(VERSION 3.5)
project(camera_base)

set(CMAKE_CXX_STANDARD 11)

find_package(catkin REQUIRED
        roscpp
        nodelet
        message_generation
        dynamic_reconfigure
        image_transport
        camera_info_manager
        rm_msgs
        )

catkin_package(
        INCLUDE_DIRS include
        CATKIN_DEPENDS
        roscpp
        nodelet
        dynamic_reconfigure
        image_transport
        camera_info_manager
)

include_directories(
        include/
        ./camera_base.h
        ${catkin_INCLUDE_DIRS}
)

