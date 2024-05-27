cmake_minimum_required(VERSION 2.8.11)
project(Scores)

include_directories(
    INCLUDE_DIRS include
)

add_executable(main
src/main.cpp
include/game_entries.cpp
include/scores.cpp)
target_link_libraries(main)
