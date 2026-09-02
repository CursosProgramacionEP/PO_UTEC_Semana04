cmake_minimum_required(VERSION 4.3)
project(A3_CambiandoNumeros)

set(CMAKE_CXX_STANDARD 20)

add_executable(A3_CambiandoNumeros src/main.cpp
        src/metodos.cpp
        include/metodos.h)
target_include_directories(A3_CambiandoNumeros PRIVATE include)
