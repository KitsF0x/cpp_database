cmake_minimum_required(VERSION 3.0.0)
project(cpp_database)

enable_testing()
find_package(GTest CONFIG REQUIRED)

add_subdirectory(src)
add_subdirectory(test)