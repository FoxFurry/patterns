cmake_minimum_required(VERSION 3.19)
project(Adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Adapter main.cpp lib/JPEGTransformator.h lib/JPEG.h lib/GIF.h lib/GIFAdapter.h)
