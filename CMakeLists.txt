cmake_minimum_required(VERSION 3.3)
project(DataStructures)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp LinkedLists.tpp LinkedLists.h Trees.cpp Trees.h)
add_executable(DataStructures ${SOURCE_FILES})




#If you want to build a library instead, you can use the add_library() command:
#   add_library (my_library STATIC|SHARED|MODULE ${SOURCE_FILES})
#There are three types of library that you can build:
#   STATIC builds a static library, i.e. a library that gets embedded into whichever executable decides to use it.
#   SHARED builds a shared library (.so on Linux, .dll on Windows).
#   MODULE builds a plugin library — something that you do not link against, but can load dynamically at runtime.