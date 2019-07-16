cmake_minimum_required(VERSION 3.14)
project(Zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Zoo main.cpp Animal.cpp Animal.h Reptile.cpp Reptile.h EggLayer.cpp EggLayer.h Viviparous.cpp Viviparous.h Bird.cpp Bird.h Mammal.cpp Mammal.h)