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

add_executable(
  strtype2
  "./strtype2.cpp"
)

add_executable(
  strtype3
  "./strtype3.cpp"
)

add_executable(
  strtype4
  "./strtype4.cpp"
)

add_executable(
  structur
  "./structur.cpp"
)

add_executable(
  assign_st
  "./assign_st.cpp"
)

add_executable(
  arrstruc
  "./arrstruc.cpp"
)

add_executable(
  address
  "./address.cpp"
)

add_executable(
  pointer
  "./pointer.cpp"
)

add_executable(
  init_ptr
  "./init_ptr.cpp"
)
