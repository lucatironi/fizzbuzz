cmake_minimum_required(VERSION 3.10)
project(fizzbuzz) #name of your project

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(googletest) # add googletest subdirectory
include_directories(vendor/googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(fizzbuzz_test fizzbuzz_test.cpp) # add this executable
target_link_libraries(fizzbuzz_test PRIVATE gtest) # link google test to this executable