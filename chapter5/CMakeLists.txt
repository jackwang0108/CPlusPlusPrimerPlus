cmake_minimum_required(VERSION 3.2)

project(chapter5)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
  forloop
  "./forloop.cpp"
)


add_executable(
  num_test
  "./num_test.cpp"
)

add_executable(
  express
  "./express.cpp"
)

add_executable(
  formore
  "./formore.cpp"
)

add_executable(
  bigstep
  "./bigstep.cpp"
)

add_executable(
  forstr1
  "./forstr1.cpp"
)

add_executable(
  plus_one
  "./plus_one.cpp"
)

add_executable(
  block
  "./block.cpp"
)

add_executable(
  forstr2
  "./forstr2.cpp"
)

add_executable(
  equal
  "./equal.cpp"
)
