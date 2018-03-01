cmake_minimum_required(VERSION 3.6)
project(hashcode2018)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/main.cpp src/solver/uber_solver/uber_solver.h src/solver/uber_solver/uber_solver.cpp src/base/input.h src/base/solver.h src/solver/my_solver/my_solver.h src/solver/my_solver/my_solver.cpp src/domain/map.h src/domain/vehicle.h src/domain/ride.h)
add_executable(hashcode2018 ${SOURCE_FILES})
