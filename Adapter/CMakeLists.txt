cmake_minimum_required(VERSION 3.19)
project(Adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Adapter main.cpp JPEGTransformator.h JPEG.h GIF.h GIFAdapter.h)
