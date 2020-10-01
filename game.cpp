#include "game.h"

void game::drawBoard()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void game::getMove(char player)
{
	//char player = ' ';
	//char player = 'X';
	int move = NULL;
	exceptionHandling A;
	bool state = A.isEmpty(move);
	cin >> move;
	if (state != true)
	{
		cout << "try again" << endl;
	} else

		if (move == 1)
		{
			board[0][0] = player;
		}
		else if (move == 2)
		{
			board[0][1] = player;
		}
		else if (move == 3)
		{
			board[0][2] = player;
		}
		else if (move == 4)
		{
			board[1][0] = player;
		}
		else if (move == 5)
		{
			board[1][1] = player;
		}
		else if (move == 6)
		{
			board[1][2] = player;
		}
		else if (move == 7)
		{
			board[2][0] = player;
		}
		else if (move == 8)
		{
			board[2][1] = player;
		}
		else if (move == 9)
		{
			board[2][2] = player;
		}
	

}

char game::playerTurn(int turn)
{
	char sign;
	if (turn % 2 == 0)
	{
		return sign = 'O';
	}
	else 
	{
		return sign = 'X';
	}
}

int game::checkTicTacToe()
{
	int count = 0;
	int row, col;
	
	// Check each of 3 rows:
	for (row = 0; row < 3; ++row)
	{
		count = 0;
		for (col = 0; col < 3; ++col)
		{
			count += (board[row][col] == 'X') ? 1 :
				(board[row][col] == 'O') ? -1 : 0;
		}
		if (count == 3 || count == -3)
		{
			return count / abs(count); // Return either 1 or -1
		}
	}

	// Check each of 3 columns.
	for (col = 0; col < 3; ++col)
	{
		count = 0;
		for (row = 0; row < 3; ++row)
		{
			count += (board[row][col] == 'X') ? 1 :
				(board[row][col] == 'O') ? -1 : 0;
		}
		if (count == 3 || count == -3)
		{
			return count / abs(count); // Return either 1 or -1
		}
	}

	// Check Left-to-Right downward Diagonal:
	count = 0;
	for (col = 0; col < 3; ++col)
	{
		count += (board[col][col] == 'X') ? 1 :
			(board[col][col] == 'O') ? -1 : 0;
	}
	if (count == 3 || count == -3)
	{
		return count / abs(count); // Return either 1 or -1
	}

	// Check Left-to-Right upward Diagonal
	count = 0;
	for (col = 0; col < 3; ++col)
	{
		count += (board[col][2 - col] == 'X') ? 1 :
			(board[col][2 - col] == 'O') ? -1 : 0;
	}
	if (count == 3 || count == -3)
	{
		return count / abs(count); // Return either 1 or -1
	}

	return 0;
}

void mode::twoPlayer()
{
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
	obj1.drawBoard();
}

void mode::easyAI()
{
	
}

char exceptionHandling::getCell(int row, int col)
{
	return 0;
}

bool exceptionHandling::isEmpty(int move)
{
	char board[3][3], type1 = 'X', type2 = 'O';

	if ((move == 1) || (board[0][0] = type1))
	{
		
		return true;
	}
	else if (move == 2)
	{
		board[0][1] = type1;
		return true;
	}
	else if (move == 3)
	{
		board[0][2] = type1;
		return true;
	}
	else if (move == 4)
	{
		board[1][0] = type1;
		return true;
	}
	else if (move == 5)
	{
		board[1][1] = type1;
		return true;
	}
	else if (move == 6)
	{
		board[1][2] = type1;
		return true;
	}
	else if (move == 7)
	{
		board[2][0] = type1;
		return true;
	}
	else if (move == 8)
	{
		board[2][1] = type1;
		return true;
	}
	else if (move == 9)
	{
		board[2][2] = type1;
		return true;
	}
	else
		return false;
}

