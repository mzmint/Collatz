cmake_minimum_required(VERSION 3.20)

project(Collatz)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Collatz main.cpp
        MintLibMath.cpp
        MintLibMath.h)