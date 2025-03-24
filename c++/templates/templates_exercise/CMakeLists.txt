# Require a specific CMake version, here 3.20 for C++23 support
cmake_minimum_required(VERSION 3.20)
# Set project name, required for every project
project(hello2)
# We use C++23, basically adds -std=c++23 to compiler flags
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Compile executable hello2 from hello2.cpp
add_executable(hello2 main.cpp)

#cmake_minimum_required(VERSION 3.16)
#project(MyProject VERSION 1.0 LANGUAGES CXX)

# Set C++ Standard
#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
#include_directories(include)

# Add source files
#add_executable(MyProject src/main.cpp)

# Link libraries (if any)
#target_link_libraries(MyProject PRIVATE some_library)

# Enable testing
#enable_testing()
#add_subdirectory(tests)

# Enable Clang-Tidy if available
#find_program(CLANG_TIDY_EXE NAMES clang-tidy)
#if(CLANG_TIDY_EXE)
#    message(STATUS "Using Clang-Tidy: ${CLANG_TIDY_EXE}")
#    set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")
#else()
#    message(WARNING "Clang-Tidy not found!")
#endif()


