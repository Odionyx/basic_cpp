cmake_minimum_required(VERSION 3.5)

project(comparison_fract LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(comparison_fract main.cpp)

install(TARGETS comparison_fract
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
