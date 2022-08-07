cmake_minimum_required(VERSION 3.23)
project(error_point_circle)

set(CMAKE_CXX_STANDARD 14)

add_executable(error_point_circle main.cpp point.cpp point.h circle.cpp circle.h)
