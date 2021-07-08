cmake_minimum_required(VERSION 3.19)
project(Factory_Method)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Factory_Method transport.hpp main.cpp Car.cpp Car.h Plane.cpp Plane.h Boat.cpp Boat.h)
