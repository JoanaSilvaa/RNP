cmake_minimum_required(VERSION 3.23.2)
project(untitled C)

set(CMAKE_C_STANDARD 11)


add_subdirectory(libprg)
add_executable(untitled main.c)
target_link_libraries(untitled PUBLIC libprg)
