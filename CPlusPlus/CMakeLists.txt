cmake_minimum_required(VERSION 3.5)

project(CPlusPlus LANGUAGES CXX)

find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0) # look into FindPkgConfig.cmake,

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})


aux_source_directory(. DIR_SRCS)
include_directories(./ ./class ./derive)
#mainwindow.cpp
add_subdirectory(class)
#add_subdirectory(derive)

add_executable(CPlusPlus ${DIR_SRCS})


target_link_libraries(CPlusPlus ${GTKMM_LIBRARIES} class)
