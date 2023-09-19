cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

add_library(math0 math0.cpp)

target_include_directories(math0
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR})