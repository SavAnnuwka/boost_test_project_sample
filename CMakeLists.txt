cmake_minimum_required(VERSION 3.13)
project(boost_test_project_sample)

set(CMAKE_CXX_STANDARD 14)
set(BOOST_ROOT "boost_1_69_0")
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(boost_test_project_sample_passed test_passed.cpp)
add_executable(boost_test_project_sample_failed test_failed.cpp)
