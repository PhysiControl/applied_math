include_directories("~/bits")

# Specify the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Set the project name and language
project(MyProject LANGUAGES CXX)

# Set C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

# Add compilation flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Wall")

# Add the executable
add_executable(MyExecutable main.cpp)

