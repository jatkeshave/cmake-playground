# CMakeList.txt : CMake project for CMakePlayground, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.17)

project ("CMakePlayground")
include_directories("include")

# Library One
add_library (lib_one SHARED 
	"src/lib_one.cpp")

# Executeable one
add_executable (exec_one "src/exec_one.cpp")
target_link_libraries(exec_one lib_one)

# Executeable two
add_executable (exec_two "src/exec_two.cpp")
target_link_libraries(exec_two lib_one)
