cmake_minimum_required(VERSION 3.7)
project(compilerconstruction)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        lexxer.cpp
        lexxer.h
        main.cpp
        Symbol.cpp
        Symbol.h
        Types.cpp
        Types.h)

add_executable(compilerconstruction ${SOURCE_FILES})