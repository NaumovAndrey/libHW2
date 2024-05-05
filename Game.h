//
// Created by andre on 04.05.2024.
//

#ifndef MATCH_GAME_GAME_H
#define MATCH_GAME_GAME_H

#include <vector>
#include "Player.h"

class Game
{
private:
    int maxCountMatchesGame;
    int maxCountMatchesPlayer;
    std::vector<Player> players;


/** Передаём в конструктор данные от пользователя*/
public:
    Game(int maxCountMatchesGame, int countPlayer, int maxCountMatchesPlayer)
            : maxCountMatchesGame(maxCountMatchesGame)
            , players(countPlayer)
            , maxCountMatchesPlayer(maxCountMatchesPlayer)
    {
        for (int i = 1; i <= countPlayer; i++)
        {
            players[i-1].playerNumber = i;
        }
    }

    void play();
};


#endif //MATCH_GAME_GAME_H
