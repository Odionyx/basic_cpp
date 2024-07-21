cmake_minimum_required(VERSION 3.5)

project(shapes_methods LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shapes_methods main.cpp)

install(TARGETS shapes_methods
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
