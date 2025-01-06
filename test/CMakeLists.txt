cmake_minimum_required(VERSION 3.27)
project(CXXTEST)
# CXX Properties ------------------------------------
set(CMAKE_CXX_STANDARD 20)
# set this flag when running coverage tests in Clion
set(CMAKE_CXX_FLAGS "--coverage")
# generate debug information
set(CMAKE_CXX_FLAGS "-g")
#----------------------------------------------------

add_subdirectory(gtest)
add_executable(${CMAKE_PROJECT_NAME}_run ExampleTests.cxx)
# to link source files and include google test include/ folder to search the files
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
# files to link with each other
target_link_libraries(${CMAKE_PROJECT_NAME}_run gtest gtest_main)