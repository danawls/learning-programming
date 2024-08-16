cmake_minimum_required(VERSION 3.28)
project(polymorphism)

set(CMAKE_CXX_STANDARD 17)

add_executable(polymorphism main.cpp
        Matrix.h
        Matrix.cpp
        setting.h
        Vector.h
        Vector.cpp)
