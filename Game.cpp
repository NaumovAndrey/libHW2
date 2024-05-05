//
// Created by andre on 04.05.2024.
//
#include "Game.h"
#include "WriteInConsole.h"
#include <conio.h>

using namespace std;

void Game::play() {
    WriteInConsole print;
    int currentPlayer = 0;
    bool gameOver = false;

    while (!gameOver) {
        print.printConsole("Player ");
        print.printConsole(to_string(players[currentPlayer].playerNumber));
        print.printConsole(" turn.\n");
        int countMatches;
        do {
            print.printConsole("Enter the number of matches you want to take (max "); //Введите количество спичек, которые вы хотите взять
            print.printConsole(to_string(maxCountMatchesPlayer));
            print.printConsole("), total(");
            cout << maxCountMatchesGame;
            print.printConsole("): ");
            cin >> countMatches;
        } while (countMatches <= 0 || countMatches > maxCountMatchesPlayer);

        maxCountMatchesGame -= countMatches;

        currentPlayer = (currentPlayer + 1) % players.size();

        gameOver = maxCountMatchesGame <= 0;
        system("cls");
    }

    print.printConsole("Player ");
    print.printConsole(to_string(players[(currentPlayer - 1) % players.size()].playerNumber));
    print.printConsole(" win!\n");
    _getch();
}