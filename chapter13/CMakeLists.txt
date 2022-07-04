cmake_minimum_required(VERSION 3.2)

project(chapter13)

set(CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories("./include")

add_executable(
    usett0
    "./usett0.cpp" "./tabtenn0.cpp"
)

add_executable(
    usett1
    "./usett1.cpp" "./tabtenn1.cpp"
)

add_executable(
    usebrass1
    "./usebrass1.cpp" "./brass.cpp"
)

add_executable(
    usebrass2
    "./usebrass2.cpp" "./brass.cpp"
)

add_executable(
    usebrass3
    "./usebrass3.cpp" "./acctABC.cpp"
)

add_executable(
    usedma
    "./usedma.cpp" "./dma.cpp"
)