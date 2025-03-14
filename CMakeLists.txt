cmake_minimum_required(VERSION 4.0)
project(tp_design_patterns)

set(CMAKE_CXX_STANDARD 20)

add_executable(tp_design_patterns main.cpp
        src/MonSingleton.cpp
        src/MonSingletonSansPointeur.cpp
        include/MonSingletonSansPointeur.h)

target_include_directories(tp_design_patterns PRIVATE include)