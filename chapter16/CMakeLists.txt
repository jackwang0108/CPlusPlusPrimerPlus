cmake_minimum_required(VERSION 3.2)

project(chapter16)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# include(${PROJECT_SOURCE_DIR}/include)
add_executable(
    str1
    "./str1.cpp"
)

add_executable(
    strfile
    "./strfile.cpp"
)

add_executable(
    hangman
    "./hangman.cpp"
)

add_executable(
    str2
    "./str2.cpp"
)

add_executable(
    smrtptrs
    "./smrtptrs.cpp"
)