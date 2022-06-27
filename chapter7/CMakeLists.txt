cmake_minimum_required(VERSION 3.2)

project(chapter7)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(
  calling
  "./calling.cpp"
)

add_executable(
  protos
  "./protos.cpp"
)

add_executable(
  twoarg
  "./twoarg.cpp"
)

add_executable(
  lotto
  "./lotto.cpp"
)

add_executable(
  arrfun1
  "./arrfun1.cpp"
)

add_executable(
  arrfunc2
  "./arrfunc2.cpp"
)

add_executable(
  arrfun3
  "./arrfun3.cpp"
)

add_executable(
  arrfunc4
  "./arrfunc4.cpp"
)

add_executable(
  strgfun
  "./strgfun.cpp"
)

add_executable(
  strgback
  "./strgback.cpp"
)

add_executable(
  travel
  "./travel.cpp"
)

add_executable(
  atrctfun
  "./atrctfun.cpp"
)

target_link_libraries(atrctfun m)

add_executable(
  strctptr
  "./strctptr.cpp"
)

target_link_libraries(strctptr m)

add_executable(
  topfive
  "./topfive.cpp"
)

add_executable(
  arobj
  "./arobj.cpp"
)

add_executable(
  recur
  "./recur.cpp"
)

add_executable(
  ruler
  "./ruler.cpp"
)

add_executable(
  fun_ptr
  "./fun_ptr.cpp"
)

add_executable(
  arfupt
  "./arfupt.cpp"
)
