cmake_minimum_required(VERSION 3.2)

project(chapter17)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
    write
    "./write.cpp"
)

add_executable(
    defaults
    "./defaults.cpp"
)

add_executable(
    manip
    "./manip.cpp"
)

add_executable(
    width
    "./width.cpp"
)

add_executable(
    fill
    "./fill.cpp"
)

add_executable(
    precise
    "./precise.cpp"
)

add_executable(
    showpt
    "./showpt.cpp"
)

add_executable(
    setf
    "./setf.cpp"
)

add_executable(
    setf2
    "./setf2.cpp"
)

target_link_libraries(
    setf2
    m
)

add_executable(
    iomanip
    "./iomanip.cpp"
)

target_link_libraries(
    iomanip
    m
)

add_executable(
    check_it
    "./check_it.cpp"
)

add_executable(
    cinexcp
    "./cinexcp.cpp"
)

add_executable(
    get_gun
    "./get_gun.cpp"
)

add_executable(
    peeker
    "./peeker.cpp"
)

add_executable(
    truncate
    "./truncate.cpp"
)

add_executable(
    fileio
    "./fileio.cpp"
)

add_executable(
    count
    "./count.cpp"
)

add_executable(
    append
    "./append.cpp"
)

add_executable(
    binary
    "./binary.cpp"
)

add_executable(
    random
    "./random.cpp"
)

add_executable(
    strout
    "./strout.cpp"
)

add_executable(
    strin
    "./strin.cpp"
)