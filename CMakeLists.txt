cmake_minimum_required(VERSION 3.6)
project(hashcode2018)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/main.cpp src/base/input.h src/base/solver.h src/solver/my_solver/my_solver.h)
add_executable(hashcode2018 ${SOURCE_FILES})
