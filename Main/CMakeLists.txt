cmake_minimum_required(VERSION 3.10)
project(Main VERSION 1.0)

add_executable(Main src/main.cpp)

if(EMSCRIPTEN)
    target_compile_options(Main PRIVATE "-sMAIN_MODULE=1")
    target_link_options(Main PRIVATE "-sMAIN_MODULE=1")
endif()

target_link_libraries(Main PRIVATE B)

target_include_directories(Main PRIVATE
    ${CMAKE_SOURCE_DIR}/B/src
)
