cmake_minimum_required(VERSION 4.3)
project(A2_EvaluarPrograma1)

set(CMAKE_CXX_STANDARD 20)

add_executable(A2_EvaluarPrograma1 src/main.cpp
        src/programasEvaluar.cpp
        include/programasEvaluar.h)
target_include_directories(A2_EvaluarPrograma1 PRIVATE include)
