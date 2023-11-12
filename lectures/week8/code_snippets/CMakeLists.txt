cmake_minimum_required (VERSION 3.1)
project (EigenLecture)

set(CMAKE_CXX_STANDARD 14)

include_directories(eigen)
add_executable(main main.cc)
