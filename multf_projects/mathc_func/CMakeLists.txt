cmake_minimum_required(VERSION 3.5)

project(mathc_func LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mathc_func main.cpp mathc_func.h mathc_func.cpp)

install(TARGETS mathc_func
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
