cmake_minimum_required(VERSION 3.12) 
project(Vector)

set(CMAKE_CXX_STANDARD 11)

add_executable(Vector main.cpp vector.cpp)

add_executable(VectorTest test.cpp vector.cpp) 
target_link_libraries(VectorTest gtest_main)

add_test(NAME VectorTest COMMAND VectorTest)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/master.zip
)
FetchContent_MakeAvailable(googletest)