cmake_minimum_required(VERSION 3.14)
project(instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(instruments main.cpp BassGuitar.cpp BassGuitar.h StringedInstrument.cpp StringedInstrument.h Instrument.cpp Instrument.h ElectricGuitar.cpp ElectricGuitar.h Violin.cpp Violin.h)