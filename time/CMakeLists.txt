cmake_minimum_required(VERSION 3.12) 
project(Time)

set(CMAKE_CXX_STANDARD 11)

add_executable(Time main.cpp time.cpp)

add_executable(TimeTest test.cpp time.cpp) 
target_link_libraries(TimeTest gtest_main)

add_test(NAME TimeTest COMMAND TimeTest)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/master.zip
)
FetchContent_MakeAvailable(googletest)