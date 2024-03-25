cmake_minimum_required(VERSION 3.12) 
project(Shape)

set(CMAKE_CXX_STANDARD 11)

add_executable(Shape main.cpp shape.cpp)

add_executable(ShapeTest test.cpp shape.cpp) 
target_link_libraries(ShapeTest gtest_main)

add_test(NAME ShapeTest COMMAND ShapeTest)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/master.zip
)
FetchContent_MakeAvailable(googletest)