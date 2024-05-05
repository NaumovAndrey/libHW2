cmake_minimum_required(VERSION 3.26)
project(Match_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(Match_game main.cpp
        WriteInConsole.cpp
        WriteInConsole.h
        Player.cpp
        Player.h
        to_go.h
        Game.h
        Game.cpp)
