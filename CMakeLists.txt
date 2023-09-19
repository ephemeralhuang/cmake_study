cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(test
    VERSION         0.0.1
    DESCRIPTION     "Eglinux's cmake study test repo"
    HOMEPAGE_URL    "https://github.com/ephemeralhuang/cmake_study"
    LANGUAGES       CXX
)

list(APPEND CMAKE_MESSAGE_CONTEXT       "test")
list(APPEND CMAKE_MODULE_PATH           "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(CMAKE_EXPORT_COMPILE_COMMANDS       ON)
set(TEST_TOP_SOURCE_DIR          ${CMAKE_CURRENT_SOURCE_DIR})
set(TEST_TOP_BINARY_DIR          ${CMAKE_CURRENT_BINARY_DIR})

