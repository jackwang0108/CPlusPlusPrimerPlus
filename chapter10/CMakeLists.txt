cmake_minimum_required(VERSION 3.2)

project(chapter10)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories("./include")

add_executable(
    usestock0
    "./usestock0.cpp"
    "./stock00.cpp"
)

add_executable(
    usestock1
    "./usestock1.cpp"
    "./stock10.cpp"
)

add_executable(
    usestock2
    "./usestock2.cpp"
    "./stock20.cpp"
)

add_executable(
    stacker
    "./stacker.cpp"
    "./stack.cpp"
)