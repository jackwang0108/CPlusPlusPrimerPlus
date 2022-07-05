cmake_minimum_required(VERSION 3.2)

project(chapter14)

set(CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories("./include")

add_executable(
    use_stuc
    "./use_stuc.cpp" "./studentc.cpp"
)

add_executable(
    use_stui
    "./use_stui.cpp" "./studenti.cpp"
)

add_executable(
    workertest
    "./workertest.cpp" "./worker0.cpp"
)

add_executable(
    workmi
    "./workmi.cpp" "./wokermi.cpp"
)

add_executable(
    stacktem
    "./stacktem.cpp"
)

add_executable(
    stkoptr1
    "./stkoptr1.cpp"
)

add_executable(
    twod
    "./twod.cpp"
)

add_executable(
    pair
    "./pair.cpp"
)

add_executable(
    tempmemb
    "./tempmemb.cpp"
)

add_executable(
    tempparm
    "./tempparm.cpp"
)

add_executable(
    frnd2tmp
    "./frnd2tmp.cpp"
)

add_executable(
    tmp2tmp
    "./tmp2tmp.cpp"
)

add_executable(
    manyfrnd
    "./manyfrnd.cpp"
)