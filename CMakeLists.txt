cmake_minimum_required(VERSION 3.20)
project(string C)

set(CMAKE_C_STANDARD 11)

add_executable(string main.c string_.c string_.h tasks/task1.c)
