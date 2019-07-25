cmake_minimum_required(VERSION 3.14)
project(testProject)

set(CMAKE_CXX_STANDARD 14)

# Add all your .cpp files here (separated by spaces)
add_library(${PROJECT_LIB_NAME} myFunctionsToTest.cpp)

# add_executable(testProject main.cpp)