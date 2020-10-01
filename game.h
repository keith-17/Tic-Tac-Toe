#pragma once
#include <iostream>
using namespace std;

class game
{
	public:

		void drawBoard();
		void getMove(char player);
		char playerTurn(int turn);
		int checkTicTacToe();


		
	private:
		
		char board[3][3] = { '1','2','3','4','5','6','7','8','9' };
		//char** cells;
		
};

class mode
{
	public: 

		void twoPlayer();
		void easyAI();
};

class exceptionHandling
{
	public:
		char getCell(int row, int col);
		bool isEmpty(int move);
};