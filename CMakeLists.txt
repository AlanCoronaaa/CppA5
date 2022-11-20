cmake_minimum_required(VERSION 3.23)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

include_directories(cmake-build-debug)

add_executable(untitled3
        cmake-build-debug/Tarea6.cpp
        cmake-build-debug/Tarea6.h ../../AppData/Roaming/JetBrains/CLion2022.2/scratches/A5.cpp)
