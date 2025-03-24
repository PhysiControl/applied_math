cmake_minimum_required(VERSION 3.26) # CHANGE THIS TO LATEST
project(Todomanager LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include)
add_executable(todo 
src/main.cpp 
src/todo.cpp
)
