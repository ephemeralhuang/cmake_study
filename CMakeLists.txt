cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(cmake
    VERSION             0.1.1
    DESCRIPTION         "HYlinux's CMake demo"
    HOMEPAGE_URL        "https://github.com/ephemeralhuang/cmake_study"
    LANGUAGE            C CXX
)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(BuildInfo)

add_subdirectory(src)

add_subdirectory(external)

add_subdirectory(docs)

add_subdirectory(test)

add_subdirectory(packaging)