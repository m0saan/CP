cmake_minimum_required(VERSION 3.17)
project(CP)

set(CMAKE_CXX_STANDARD 20)

add_executable(CP main.cpp)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -O2")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )