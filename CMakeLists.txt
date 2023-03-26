cmake_minimum_required(VERSION 3.24)
project(Space_Invader C)

set(CMAKE_C_STANDARD 99)

add_executable(Space_Invader main.c)
target_link_libraries(Space_Invader -lmingw32 -lallegro-5.0.10-monolith-md-debug)