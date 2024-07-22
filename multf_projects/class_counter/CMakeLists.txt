cmake_minimum_required(VERSION 3.5)

project(class_counter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(class_counter main.cpp class_counter.h class_counter.cpp)

install(TARGETS class_counter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
