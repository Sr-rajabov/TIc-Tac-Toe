cmake_minimum_required(VERSION 3.21)
project(Tic_Tac_Toe)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tic_Tac_Toe main.cpp Field.cpp Field.h Player.cpp Player.h Game.cpp Game.h)
