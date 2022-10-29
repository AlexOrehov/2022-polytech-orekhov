cmake_minimum_required(VERSION 3.24)
project(helloWorld VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
add_executable(helloWorld func.cpp hello_world.cpp func.h)