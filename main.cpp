#include <iostream>
#include "WriteInConsole.h"
#include "Game.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

#pragma region variables
    int maxCountMatchesGame;
    int maxCountMatchesPlayer;
    int countPlayer;
#pragma endregion

    cout << "The match game!" << endl;
    cout << "Set the number of matches in the game: "; //Задайте количество спичек в игре
    cin >> maxCountMatchesGame;
    cout << "Enter the number of players: "; //Введите количество игроков
    cin >> countPlayer;
    cout << "Set the maximum number that a player can take in one turn: "; //max кол спичек за ход
    cin >> maxCountMatchesPlayer;

    Game game(maxCountMatchesGame, countPlayer, maxCountMatchesPlayer);
    game.play();

    return 0;
}
