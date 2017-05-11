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
        Types.h parser.cpp parser.h pClasses/PackageClause.cpp pClasses/PackageClause.h pClasses/ImportDeclaration.cpp pClasses/ImportDeclaration.h pClasses/Start.cpp pClasses/Start.h)

add_executable(compilerconstruction ${SOURCE_FILES})