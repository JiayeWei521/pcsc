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
            university_student.hpp
            ../../codes_in_textbook/chapter-05/pointers_as_function_arguments.cpp
    )
endforeach()
