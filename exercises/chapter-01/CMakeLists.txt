include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# The next lines represent a list of all the executables in the folder (chapter)
# There is typically one executable per exercise.
# As you solve exercises, you need to add them here.
# The syntax is add_executable(executable_name source_file_name)

cmake_minimum_required(VERSION 3.5)
project(snippet)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES  ${PROJECT_SOURCE_DIR}/*.cpp)
foreach(f ${SOURCES})
    get_filename_component(basename ${f} NAME_WE)
    get_filename_component(dir ${f} DIRECTORY)
    add_executable(${basename} ${f}
            ../chapter-09/Exception.hpp
            ../chapter-09/Exception.cpp
            ../chapter-03/ch-03-ex-01.cpp
            ../chapter-09/ch-09-ex-01.cpp
            ../chapter-09/OutOfRangeException.hpp
            ../chapter-09/FileNotOpenException.hpp
            ../chapter-09/OutOfRangeException.cpp
            ../chapter-09/FileNotOpenException.cpp)
endforeach()
