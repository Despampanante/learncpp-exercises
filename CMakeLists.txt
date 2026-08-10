cmake_minimum_required(VERSION 3.20)
project(learncpp_exercises CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -Wextra -Wpedantic)

add_subdirectory(src/01-fundamentals)
add_subdirectory(src/02-references-pointers)
add_subdirectory(src/03-object-lifetime-raii)
add_subdirectory(src/04-move-semantics)
add_subdirectory(src/05-templates-stl)
add_subdirectory(src/06-smart-pointers)
add_subdirectory(src/07-csv-parser)
