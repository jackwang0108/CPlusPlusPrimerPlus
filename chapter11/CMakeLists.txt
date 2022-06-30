cmake_minimum_required(VERSION 3.2)

project(chapter11)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(BEFORE "./include")

add_executable(
    usetime0
    "./usetime0.cpp" "./mytime0.cpp"
)

add_executable(
    usetime1
    "./usetime1.cpp" "./mytime1.cpp"
)

add_executable(
    usetime2
    "./usetime2.cpp" "./mytime2.cpp"
)

add_executable(
    usetime3
    "./usetime3.cpp" "./mytime3.cpp"
)

add_executable(
    randwalk
    "./randwalk.cpp" "./vector.cpp"
)