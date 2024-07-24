cmake_minimum_required(VERSION 3.5)

project(preproc_directiv LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(preproc_directiv main.cpp)

install(TARGETS preproc_directiv
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
