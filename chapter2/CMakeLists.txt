cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

project(
  chapter2
  VERSION 1.0
)

add_executable(
  myfirst
  "./myfirst.cpp"
)

add_executable(
  carrots
  "./carrots.cpp"
)

add_executable(
  getinfo
  "./getinfo.cpp"
)

add_executable(
  sqrt
  "./sqrt.cpp"
)

target_link_libraries(
  sqrt
  m
)

add_executable(
  outfunc
  "./ourfunc.cpp"
)

add_executable(
  convert
  "./convert.cpp"
)
