cmake_minimum_required(VERSION 3.2)

project(chapter18)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(BEFORE ${PROJECT_SOURCE_DIR}/include)

add_executable(
    rvref
    "./rvref.cpp"
)

add_executable(
    useless
    "./useless.cpp"
)

add_executable(
    lambda0
    "./lambda0.cpp"
)

target_link_libraries(
    lambda0
    m
)

add_executable(
    lambda1
    "./lambda1.cpp"
)

target_link_libraries(
    lambda1
    m
)

add_executable(
    callable
    "./callable.cpp"
)

add_executable(
    wrapped
    "./wrapped.cpp"
)

add_executable(
    variadic1
    "./variadic1.cpp"
)

add_executable(
    variadic2
    "./variadic2.cpp"
)