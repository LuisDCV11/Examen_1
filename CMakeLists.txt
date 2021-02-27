cmake_minimum_required(VERSION 3.17)
project(biblioteca)

set(CMAKE_CXX_STANDARD 20)

add_library(biblioteca SHARED library.cpp library.h)