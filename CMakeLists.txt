# Define cmake version
cmake_minimum_required(VERSION 3.19)

# Project name
project(simpleds 
  VERSION 1.0 
  DESCRIPTION "Stack, Queue and Circular Queue Examples in C++" 
  LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# Set compiler options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -Wall -Wextra -Wpedantic")

# Define Target
add_executable(simpleds
  src/main.cpp
  src/Stack.h
  src/Stack.cpp
  src/Queue.h
  src/Queue.cpp
  )