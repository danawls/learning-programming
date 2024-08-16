cmake_minimum_required(VERSION 3.28)
project(initializer_list)

set(CMAKE_CXX_STANDARD 17)

add_executable(initializer_list main.cpp
        Person.h
        setting_main.h
        Person.cpp
        Company.cpp
        Company.h
        Developer.cpp
        Developer.h
)
