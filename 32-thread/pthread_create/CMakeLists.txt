cmake_minimum_required(VERSION 3.5)

project(pthread_create LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_libraries(pthread)

add_executable(pthread_create main.cpp)
