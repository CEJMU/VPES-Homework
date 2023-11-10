cmake_minimum_required(VERSION 3.10)

project(Exercise2)

find_package(SystemCLanguage CONFIG REQUIRED)
set (CMAKE_CXX_STANDARD ${SystemC_CXX_STANDARD})

add_executable(nand
    nand_main.cpp
)

target_link_libraries(nand
    SystemC::systemc
)

# Uncomment this after building nand:

#add_executable(xor
#    xor_main.cpp
#)
#
#target_link_libraries(xor
#    SystemC::systemc
#)


