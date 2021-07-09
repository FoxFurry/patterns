cmake_minimum_required(VERSION 3.19)
project(Factory_Method)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Factory_Method lib/Transport.h main.cpp lib/Car.cpp lib/Car.h lib/Plane.cpp lib/Plane.h lib/Boat.cpp lib/Boat.h)
