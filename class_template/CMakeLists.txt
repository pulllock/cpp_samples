cmake_minimum_required(VERSION 3.27)
project(class_template)

set(CMAKE_CXX_STANDARD 11)

add_executable(class_template main.cpp
        Compare.cpp
        Compare.h)
