cmake_minimum_required(VERSION 3.10)

project(CMakeDemo)

add_subdirectory(mathop)

add_executable(CMakeDemo main.cpp)

target_link_libraries(CMakeDemo pthread mathop)
