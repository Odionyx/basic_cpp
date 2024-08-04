cmake_minimum_required(VERSION 3.5)

project(other_operations LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(other_operations main.cpp fraction.h fraction.cpp)

install(TARGETS other_operations
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
