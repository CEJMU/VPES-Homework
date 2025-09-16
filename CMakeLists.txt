cmake_minimum_required(VERSION 3.25)

project(VPES-Homework)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)
FetchContent_Declare(systemc
    URL https://github.com/accellera-official/systemc/archive/refs/tags/3.0.1.tar.gz
)
set(DISABLE_COPYRIGHT_MESSAGE TRUE)
FetchContent_MakeAvailable(systemc)

add_subdirectory(HW2)
add_subdirectory(HW3)
# add_subdirectory(HW4)
# add_subdirectory(HW5)
# add_subdirectory(HW6)
# add_subdirectory(HW8)
