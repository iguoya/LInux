cmake_minimum_required(VERSION 3.5)

project(CPlusPlus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_INCLUDE_CURRENT_DIR ON)
#-std=c++2a
set(CMAKE_CXX_FLAGS " -Wno-error=deprecated-declarations -Wno-deprecated-declarations ")

find_package(PkgConfig REQUIRED)

pkg_check_modules(GTKMM REQUIRED gtkmm-4.0) # look into FindPkgConfig.cmake,

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})


include_directories (Class Derive)

aux_source_directory(Class Class)
aux_source_directory(Derive Derive)


set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
#        mainwindow.ui
        ${Class}
        ${Derive}
)

add_executable(CPlusPlus ${PROJECT_SOURCES})

target_link_libraries(CPlusPlus ${GTKMM_LIBRARIES})
