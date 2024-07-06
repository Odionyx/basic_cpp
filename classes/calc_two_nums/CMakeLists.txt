cmake_minimum_required(VERSION 3.5)

project(calc_two_nums LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calc_two_nums main.cpp)

install(TARGETS calc_two_nums
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
