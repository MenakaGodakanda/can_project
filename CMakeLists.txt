cmake_minimum_required(VERSION 3.10)
project(CANProject)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add subdirectories
add_subdirectory(src/j1939)
add_subdirectory(src/canopen)

# Add executable
add_executable(CANProject src/main.cpp)

# Link libraries
target_link_libraries(CANProject j1939 canopen)
