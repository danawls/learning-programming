cmake_minimum_required(VERSION 3.28)
project(lambda_function)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lambda_function
        lambda.cpp
        main.h
        minus.cpp
        sum.cpp
        lambda_function_comp.cpp
        test_lambda.cpp)
