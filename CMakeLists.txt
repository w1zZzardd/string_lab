cmake_minimum_required(VERSION 3.20)
project(string C)

set(CMAKE_C_STANDARD 11)

add_executable(string main.c tasks/string_.c tasks/string_.h)
