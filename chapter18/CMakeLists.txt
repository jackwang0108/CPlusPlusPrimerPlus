cmake_minimum_required(VERSION 3.2)

project(chapter18)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
    rvref
    "./rvref.cpp"
)

add_executable(
    useless
    "./useless.cpp"
)