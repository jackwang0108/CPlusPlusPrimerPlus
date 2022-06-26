cmake_minimum_required(VERSION 3.2)

project(chapter6)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
  if
  "./if.cpp"
)

add_executable(
  ifelse
  "./ifelse.cpp"
)

add_executable(
  ifelseif
  "./ifelseif.cpp"
)

add_executable(
  or
  "./or.cpp"
)

add_executable(
  and
  "./and.cpp"
)

add_executable(
  more_and
  "./more_and.cpp"
)

add_executable(
  not
  "./not.cpp"
)

add_executable(
  cctypes
  "./cctypes.cpp"
)

add_executable(
  condit
  "./condit.cpp"
)

add_executable(
  switch
  "./switch.cpp"
)

add_executable(
  enum
  "./enum.cpp"
)

add_executable(
  jump
  "./jump.cpp"
)

add_executable(
  cinfish
  "./cinfish.cpp"
)

add_executable(
  cingolf
  "./cingolf.cpp"
)

add_executable(
  outfile
  "./outfile.cpp"
)

add_executable(
  sumafile
  "./sumafile.cpp"
)
