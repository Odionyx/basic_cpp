cmake_minimum_required(VERSION 3.5)

project(class_hierarchy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(class_hierarchy main.cpp shape.h shape.cpp
    triangle.h triangle.cpp right_angled_tri.h right_angled_tri.cpp
    isosceles_tri.h isosceles_tri.cpp equilateral_tri.h equilateral_tri.cpp
    quadrangle.h quadrangle.cpp parallelogram.h parallelogram.cpp
    rhomb.h rhomb.cpp rectangle.h rectangle.cpp square.h square.cpp)

install(TARGETS class_hierarchy
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
