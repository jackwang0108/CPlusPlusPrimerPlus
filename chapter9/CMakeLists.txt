cmake_minimum_required(VERSION 3.2)

project(chapter9)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(BEFORE "./include")

add_library(file1_lib STATIC "./library/file2.cpp")

add_executable(
    file1
    "./file1.cpp"

    # "./file1.cpp" "./library/file2.cpp"
)

target_link_libraries(file1 file1_lib)

add_executable(
    file11
    "./file1.cpp" "./library/file2.cpp"
)

add_executable(
    auto
    "./auto.cpp"
)

add_executable(
    external
    "./external.cpp"
    "./library/support.cpp"
)

add_executable(
    twofile1
    "./twofile1.cpp" "./library/twofile2.cpp"
)

add_executable(
    static
    "./static.cpp"
)

add_executable(
    newplace
    "./newplace.cpp"
)

add_library(
    namesp_lib STATIC
    "./library/namesp.cpp"
)

add_executable(
    namessp
    "./namessp.cpp"
)

target_link_libraries(
    namessp namesp_lib
)

