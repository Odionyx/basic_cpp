cmake_minimum_required(VERSION 3.5)

project(simple_exception LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(simple_exception main.cpp)

install(TARGETS simple_exception
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
