cmake_minimum_required(VERSION 3.5)

project(shapes_sides_corners LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shapes_sides_corners main.cpp)

install(TARGETS shapes_sides_corners
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
