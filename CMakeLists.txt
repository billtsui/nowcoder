cmake_minimum_required(VERSION 3.10)

project(CPL2024 C)

set(PATH "./src/source/")
set(FILENAME "BC1.c" CACHE STRING "FILENAME")

set(EXECUTABLE_OUTPUT_PATH ..)
add_executable(CPL2024 ${PATH}${FILENAME})
