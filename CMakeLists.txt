cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(zachet)

include_directories(zachet)

add_executable(Zachet task.cpp function.cpp)
add_executable(Tests function_test.cpp)

target_link_libraries(Tests gtest gtest_main)

enable_testing()
add_test(NAME Tests COMMAND Tests)
