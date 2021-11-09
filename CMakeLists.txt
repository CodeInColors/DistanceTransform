cmake_minimum_required(VERSION 3.1)

project(DT CXX)

set(CMAKE_CXX_FLAGS "-O2 -Wall -Wextra")

 include_directories(src)

add_executable(COMPUTE main.cpp)

