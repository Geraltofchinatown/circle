cmake_minimum_required(VERSION 3.21)
project(circle)

include(cmake-build-debug/cmake_install.cmake)


set(CMAKE_CXX_STANDARD 11)

add_executable(circle  circle.cpp circle.h myprint.h)

add_executable(student student.cpp)
add_executable(square square.cpp)
add_executable(jicheng jicheng.cpp son1.h)
add_executable(computer computer.cpp)
add_executable(template_test template_test.cpp MyArray.hpp)
add_executable(vector_test vector_test.cpp)
add_executable(vector_int_test vector_int_test.cpp)