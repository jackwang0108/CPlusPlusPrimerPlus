cmake_minimum_required(VERSION 3.2)

project(chapter8)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
    inline
    "./inline.cpp"
)

add_executable(
    firstref
    "./firstref.cpp"
)

add_executable(
    sceref
    "./sceref.cpp"
)

add_executable(
    swaps
    "./swaps.cpp"
)

add_executable(
    cubes
    "./cubes.cpp"
)

add_executable(
    strref
    "./strref.cpp"
)

add_executable(
    strquote
    "./strquote.cpp"
)

add_executable(
    filefunc
    "./filefunc.cpp"
)

add_executable(
    left
    "./left.cpp"
)

add_executable(
    leftover
    "./leftover.cpp"
)

add_executable(
    funtemp
    "./funtemp.cpp"
)

add_executable(
    twotemp
    "./twotemp.cpp"
)

add_executable(
    twoswap
    "./twoswap.cpp"
)

add_executable(
    temptempover
    "./temptempover.cpp"
)

add_executable(
    choice
    "./choice.cpp"
)