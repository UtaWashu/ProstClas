cmake_minimum_required(VERSION 3.12) 
project(Fraction)

set(CMAKE_CXX_STANDARD 11)

add_executable(Fraction main.cpp fraction.cpp)

add_executable(FractionTest test.cpp fraction.cpp) 
target_link_libraries(FractionTest gtest_main)

add_test(NAME FractionTest COMMAND FractionTest)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/master.zip
)
FetchContent_MakeAvailable(googletest)