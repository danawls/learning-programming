cmake_minimum_required(VERSION 3.28)
project(hello_word)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello_word main.cpp
        std_lib_facilities.h)
