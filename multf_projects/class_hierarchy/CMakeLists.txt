cmake_minimum_required(VERSION 3.5)

project(class_hierarchy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set (SOURCES
    main.cpp
    shape.cpp
    triangle.cpp
    right_angled_tri.cpp
    isosceles_tri.cpp
    equilateral_tri.cpp
    quadrangle.cpp
    parallelogram.cpp
    rhomb.cpp
    rectangle.cpp
    square.cpp
)

set (HEADERS
    shape.h
    triangle.h
    right_angled_tri.h
    isosceles_tri.h
    equilateral_tri.h
    quadrangle.h
    parallelogram.h
    rhomb.h
    rectangle.h
    square.h
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

install(TARGETS class_hierarchy
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
