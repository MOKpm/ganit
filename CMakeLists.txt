cmake_minimum_required(VERSION 3.10)

# Project name
project(Ganit)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add library
add_library(ganit STATIC src/basic_operations.cpp)

# Add executable for testing
add_executable(test_basic_operations test/test_basic_operations.cpp)

# Link the library to the executable
target_link_libraries(test_basic_operations ganit)
