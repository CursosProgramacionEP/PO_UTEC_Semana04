cmake_minimum_required(VERSION 4.3)
project(A6_IngresoNotasLab)

set(CMAKE_CXX_STANDARD 20)

add_executable(A6_IngresoNotasLab src/main.cpp
        src/nota.cpp
        include/nota.h)
target_include_directories(A6_IngresoNotasLab PRIVATE include)
