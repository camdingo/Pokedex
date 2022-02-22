
cmake_minimum_required (VERSION 3.8)

project(Pokemon)

set( DCMAKE_TOOLCHAIN_FILE "C:/vcpkg/vcpkg-master/scripts/buildsystems/vcpkg.cmake")

find_package(Boost 1.77.0 COMPONENTS program_options)

add_subdirectory(src)

