cmake_minimum_required(VERSION 3.2)

project(chapter15)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(
    use_tv
    "./use_tv.cpp" "./tv.cpp"
)

add_executable(
    use_tvfm
    "./use_tvfm.cpp" "./tv.cpp"
)

add_executable(
    netsted
    "./netsted.cpp"
)

add_executable(
    error1
    "./error1.cpp"
)

add_executable(
    error2
    "./error2.cpp"
)

add_executable(
    error3
    "./error3.cpp"
)

add_executable(
    error4
    "./error4.cpp"
)