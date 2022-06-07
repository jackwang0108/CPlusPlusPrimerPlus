cmake_minimum_required(VERSION 3.2)

project(chapter4)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
  arrayone
  "./arrayone.cpp"
)

add_executable(
  string
  "./string.cpp"
)

add_executable(
  instr1
  "./instr1.cpp"
)

add_executable(
  instr2
  "./instr2.cpp"
)

add_executable(
  instr3
  "./instr3.cpp"
)

add_executable(
  numstr
  "./numstr.cpp"
)

add_executable(
  strtype1
  "./strtype1.cpp"
)
