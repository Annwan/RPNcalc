cmake_minimum_required(VERSION 2.6)
project(rpncalc)

add_executable(rpncalc main.cpp)

install(TARGETS rpncalc RUNTIME DESTINATION bin)
