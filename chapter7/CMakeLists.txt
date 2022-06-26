cmake_minimum_required(VERSION 3.2)

project(chapter7)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
  calling
  "./calling.cpp"
)
