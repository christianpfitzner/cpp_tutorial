cmake_minimum_required (VERSION 2.8.11)
project (cpp_tutorial)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lambdaExpression cpp14/lambdaExpression.cpp)
add_executable(uniquePtr        cpp14/uniquePtr.cpp)



