cmake_minimum_required(VERSION 3.10)
project(DynamicLibrariesDemo VERSION 1.0)

set_property(GLOBAL PROPERTY TARGET_SUPPORTS_SHARED_LIBS TRUE)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(Main)