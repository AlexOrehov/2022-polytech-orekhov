cmake_minimum_required(VERSION 3.24)
project(hashing LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(hashing hash.cpp hash.h)