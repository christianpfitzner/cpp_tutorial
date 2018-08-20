cmake_minimum_required (VERSION 2.8.11)
project (cpp_tutorial)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


# cpp14
add_executable(lambdaExpression cpp14/lambdaExpression.cpp)
add_executable(uniquePtr        cpp14/uniquePtr.cpp)
add_executable(auto             cpp14/auto.cpp)
#add_executable(string_operations cpp14/string_operations.cpp)


add_executable(deprecated       cpp14/deprecated.cpp)

# pattern
add_executable(singleton                        pattern/singleton.cpp)


