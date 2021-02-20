cmake_minimum_required(VERSION 3.16)
project(ts)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)
enable_testing()

set(Sources ts.cc)
set(Headers ts.h)

add_library(ts STATIC ${Sources} ${Headers})

add_subdirectory(tests)
