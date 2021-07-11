cmake_minimum_required(VERSION 3.16.3)
project(Composite)

set(CMAKE_CXX_STANDARD 14)

add_executable(Composite main.cpp lib/Box.h lib/Product.h)
