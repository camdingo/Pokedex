# CMakeList.txt : CMake project for opencv_test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project(Pokedex)

add_subdirectory(common)
add_subdirectory(database)

set( CXX_SRCS
	main.cpp
)

include_directories( 
	"C:/vcpkg/vcpkg-master/installed/x86-windows/include/boost/"
)
 
# Add source to this project's executable.
add_executable (Pokedex ${CXX_SRCS})

target_link_libraries( Pokedex
	#Boost::program_options
)
