cmake_minimum_required(VERSION 3.6)
project(hashcode2018)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/main.cpp src/input_class.h)
add_executable(hashcode2018 ${SOURCE_FILES})
