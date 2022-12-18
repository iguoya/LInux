cmake_minimum_required(VERSION 3.5)

project(CPlusPlus LANGUAGES CXX)

find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0) # look into FindPkgConfig.cmake,

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_directories(
    ${GTKMM_LIBRARY_DIRS}  )

include_directories(
    ${GTKMM_INCLUDE_DIRS}  )

add_executable(CPlusPlus main.cpp)


target_link_libraries(CPlusPlus
    ${GTKMM_LIBRARIES}  )
