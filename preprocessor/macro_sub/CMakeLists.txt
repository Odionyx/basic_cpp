cmake_minimum_required(VERSION 3.5)

project(macro_sub LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(macro_sub main.cpp)

install(TARGETS macro_sub
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
