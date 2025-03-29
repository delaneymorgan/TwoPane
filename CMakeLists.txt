cmake_minimum_required(VERSION 3.30)
project(twopane)

set(CMAKE_CXX_STANDARD 98)

add_executable(twopane main.cpp
        TPInput.cpp
        TPInput.h
        TPOutput.cpp
        TPOutput.h
        TwoPane.cpp
        TwoPane.h)

target_link_libraries( twopane
        ncurses
)
