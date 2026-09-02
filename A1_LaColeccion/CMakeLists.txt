cmake_minimum_required(VERSION 4.3)
project(A1_LaColeccion)

set(CMAKE_CXX_STANDARD 20)

add_executable(A1_LaColeccion src/main.cpp)
target_include_directories(A1_LaColeccion PRIVATE include)
