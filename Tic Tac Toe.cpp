// Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "game.h"

int main()
{
    cout << "Welcome to tic tac toe" << endl;

    int gameMode;
    cin >> gameMode;


    switch (gameMode)
    {
    case 1:
        mode A;
        A.twoPlayer();
    case 2:
        ;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


/*
    int turn = 0, XO;
    game obj1;

    do
    {
        turn++;
        obj1.drawBoard();
        char playerGo = obj1.playerTurn(turn);
        obj1.getMove(playerGo);
        XO = obj1.checkTicTacToe();
    } while ((XO == 0) && (turn < 9));
    obj1.drawBoard();*/