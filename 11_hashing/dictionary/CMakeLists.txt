cmake_minimum_required(VERSION 3.24)
project(dictionary LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(dictionary dictionary.cpp dictionary.h hash.h)