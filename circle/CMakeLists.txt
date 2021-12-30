cmake_minimum_required(VERSION 3.21)
project(circle)

include(cmake-build-debug/cmake_install.cmake)


set(CMAKE_CXX_STANDARD 11)

add_executable(circle  circle.cpp circle.h)

add_executable(student student.cpp)
add_executable(square square.cpp)