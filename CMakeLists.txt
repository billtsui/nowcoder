cmake_minimum_required(VERSION 3.10)

project(CPL2024 C)

set(PATH "./src/编程初学者入门训练/")
set(FILENAME "BC1.HelloNowcoder.c" CACHE STRING "FILENAME")

set(EXECUTABLE_OUTPUT_PATH ..)
add_executable(nowcoder ${PATH}${FILENAME})
