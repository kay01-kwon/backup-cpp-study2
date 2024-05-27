cmake_minimum_required(VERSION 2.8.11)
project(SortArray)

include_directories(
    INCLUDE_DIRS include
)

add_executable(sort_array
src/sort_array.cpp)
target_link_libraries(sort_array)