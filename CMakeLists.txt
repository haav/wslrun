cmake_minimum_required(VERSION 3.27)
project(wslrun)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc --static")

add_executable(wslrun main.cpp)
