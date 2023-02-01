cmake_minimum_required(VERSION 2.8)

project(recursion)
add_executable(${PROJECT_NAME} "main.cpp" "recursion.cpp")



find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_recursion test_recursion.cpp recursion.cpp)
target_link_libraries(test_recursion ${GTEST_BOTH_LIBRARIES})
target_link_libraries(test_recursion ${CMAKE_THREAD_LIBS_INIT})
add_test(Test test_recursion)
