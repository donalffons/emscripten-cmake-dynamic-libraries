cmake_minimum_required(VERSION 3.10)
project(LibA VERSION 1.0)

add_library(A SHARED
    src/a.cpp
    src/a.h
)

target_link_options(A PRIVATE "-sSIDE_MODULE=1")
target_compile_options(A PRIVATE "-sSIDE_MODULE=1")
