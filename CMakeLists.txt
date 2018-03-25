cmake_minimum_required(VERSION 3.9)
project(rom_varya)

set(CMAKE_CXX_STANDARD 11)

add_executable(Main numconvert.h numconvert.cpp main.cpp)
add_executable(TestingMain numconvert.h numconvert.cpp catch.hpp test_main.cpp)
