cmake_minimum_required(VERSION 3.2)

project(chapter12)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories("./include")

add_executable(
    vegnews
    "./vegnews.cpp" "./strngbad.cpp"
)

add_executable(
    vegnnews1
    "./vegnnews1.cpp" "./strngbad1.cpp"
)

add_executable(
    sayings1
    "./sayings1.cpp" "./string1.cpp"
)

add_executable(
    saying2
    "./saying2.cpp" "./string1.cpp"
)