cmake_minimum_required(VERSION 3.14)
project(PiHeader C)

set(CMAKE_C_STANDARD 11)

add_executable(PiHeader main.c Pi.h Pi.c)