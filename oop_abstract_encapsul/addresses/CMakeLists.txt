cmake_minimum_required(VERSION 3.5)

project(addresses LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(addresses main.cpp)

install(TARGETS addresses
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
