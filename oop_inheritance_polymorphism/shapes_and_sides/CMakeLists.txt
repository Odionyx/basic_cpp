cmake_minimum_required(VERSION 3.5)

project(shapes_and_sides LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shapes_and_sides main.cpp)

install(TARGETS shapes_and_sides
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
