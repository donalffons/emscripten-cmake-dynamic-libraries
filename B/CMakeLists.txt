cmake_minimum_required(VERSION 3.10)
project(LibB VERSION 1.0)

add_library(B SHARED
    src/b.cpp
    src/b.h
)

target_link_libraries(B PRIVATE A)
target_include_directories(B PRIVATE ${CMAKE_SOURCE_DIR}/A/src)

if(EMSCRIPTEN)
    target_link_options(B PRIVATE "-sSIDE_MODULE=1")
    target_compile_options(B PRIVATE "-sSIDE_MODULE=1")
endif()
