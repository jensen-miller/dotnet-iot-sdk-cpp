# CMakeList.txt : CMake project for TemplatedCMake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project("BlinkSample" CXX)

# Add source to this project's executable.
add_executable ("blink-program" "program.cpp")
set_target_properties("blink-program" PROPERTIES FOLDER examples)

include_directories("blink-program" PUBLIC "../../include")
target_link_libraries("blink-program" PUBLIC "${PROJECT_LIB_NAME}")