cmake_minimum_required(VERSION 3.27)
project(lab_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab_cpp main.cpp
        include/Animal.cpp
        include/Animal.h
        include/Dog.cpp
        include/Dog.h
        include/Fox.cpp
        include/Fox.h
)
