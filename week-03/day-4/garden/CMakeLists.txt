cmake_minimum_required(VERSION 3.14)
project(garden)

set(CMAKE_CXX_STANDARD 14)

add_executable(garden main.cpp Garden.cpp Garden.h Plant.cpp Plant.h Tree.cpp Tree.h Flower.cpp Flower.h)