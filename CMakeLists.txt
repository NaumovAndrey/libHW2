cmake_minimum_required(VERSION 3.26)
project(Match_game)

set(CMAKE_CXX_STANDARD 20)

#add_executable(Match_game main.cpp
#        WriteInConsole.cpp
#        WriteInConsole.h
#        Player.cpp
#        Player.h
#        Game.h
#        Game.cpp
#        Game.cpp
#        Game.cpp)

add_library(match_game STATIC match_game.cpp)

add_executable(main main.cpp)
target_link_libraries(main match_game)