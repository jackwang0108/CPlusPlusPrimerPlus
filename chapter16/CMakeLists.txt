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

add_executable(
    fowl
    "./fowl.cpp"
)

add_executable(
    vect1
    "./vect1.cpp"
)

add_executable(
    vect2
    "./vect2.cpp"
)

add_executable(
    vect3
    "./vect3.cpp"
)

add_executable(
    copyit
    "./copyit.cpp"
)

add_executable(
    insert
    "./insert.cpp"
)

add_executable(
    list
    "./list.cpp"
)

add_executable(
    setops
    "./setops.cpp"
)

add_executable(
    multimap
    "./multimap.cpp"
)

add_executable(
    functor
    "./functor.cpp"
)

add_executable(
    funadap
    "./funadap.cpp"
)

add_executable(
    strgst1
    "./strgst1.cpp"
)

add_executable(
    lstrmv
    "./lstrmv.cpp"
)

add_executable(
    usealgo
    "./usealgo.cpp"
)

add_executable(
    valvect
    "./valvect.cpp"
)

add_executable(
    vslice
    "./vslice.cpp"
)