cmake_minimum_required(VERSION 4.0)
project(quiz2_zachrt)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(quiz2_zachrt
        Cylinder.cpp
        Cylinder.h
        main.cpp
        Circle.h
        Circle.cpp)
