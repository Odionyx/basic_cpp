cmake_minimum_required(VERSION 3.5)

project(sorting_address LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(sorting_address main.cpp)

install(TARGETS sorting_address
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
