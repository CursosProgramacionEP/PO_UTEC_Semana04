cmake_minimum_required(VERSION 4.3)
project(A5_CalculadoraLab)

set(CMAKE_CXX_STANDARD 20)

add_executable(A5_CalculadoraLab src/main.cpp
        src/calculadora.cpp
        include/calculadora.h)
target_include_directories(A5_CalculadoraLab PRIVATE include)
