cmake_minimum_required(VERSION 3.5)

project(thread LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_libraries(pthread)
add_executable(thread main.cpp)
