//Tic Tac Toe Game in C++.
//Importing the inbuild libraries in CPP.
#include <iostream>
#include <stdlib.h>
using namespace std;
//Array for the board
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
//Variable Declaration
char choice;
int row, column;
char turn = 'X';
bool draw = false;
//Function to show the current status of the gaming board
void display_board()
{
	//Rander Game Board LAYOUT
	cout << " PLAYER - 1 [X]       PLAYER - 2 [O]  " << endl << endl;
	cout << "       |     |      " << endl;
	cout << "    " << board[0][0] << "  | " << board[0][1] << "   | " << board[0][2] << endl;
	cout << "  _____|_____|_____ " << endl;
	cout << "       |     |      " << endl;
	cout << "    " << board[1][0] << "  | " << board[1][1] << "   | " << board[1][2] << endl;
	cout << "  _____|_____|_____ " << endl;
	cout << "       |     |      " << endl;
	cout << "    " << board[2][0] << "  | " << board[2][1] << "   | " << board[2][2] << endl;
	cout << "       |     |      " << endl << endl;
}
//Function to get the player input and update the board
void player_turn()
{
	if (turn == 'X')
	{
		cout << "  Player - 1 [X] turn : ";
	}
	else if (turn == 'O')
	{
		cout << "  Player - 2 [O] turn : ";
	}
	//Taking input from user
	//updating the board according to choice and re-assigning the turn Start
	cin >> choice;
	cout << endl;
	//switch case to get which row and column will be updated
	switch (choice)
	{
	case '1':
		row = 0;
		column = 0;
		break;
	case '2':
		row = 0;
		column = 1;
		break;
	case '3':
		row = 0;
		column = 2;
		break;
	case '4':
		row = 1;
		column = 0;
		break;
	case '5':
		row = 1;
		column = 1;
		break;
	case '6':
		row = 1;
		column = 2;
		break;
	case '7':
		row = 2;
		column = 0;
		break;
	case '8':
		row = 2;
		column = 1;
		break;
	case '9':
		row = 2;
		column = 2;
		break;
	default: 
		cout << "Invalid Move..!!(Rule no.4 broken). ";
	}
	if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
	{
		//updating the position for 'X' symbol if
		//it is not already occupied
		board[row][column] = 'X';
		turn = 'O';
	}
	else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
	{
		//updating the position for 'O' symbol if
		//it is not already occupied
		board[row][column] = 'O';
		turn = 'X';
	}
	else
	{
		//if input position already filled
		cout << "Box already filled! Please choose another!!";
		player_turn();
	}
	/* Ends */
	display_board();
}
//Function to get the game status e.g. GAME WON, GAME DRAW GAME IN CONTINUE MODE
bool gameover()
{
	//checking the win for Simple Rows and Simple Column
	for (int i = 0; i < 3; i++)
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
			return false;
	//checking the win for both diagonal
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
		return false;
	//Checking the game is in continue mode or not
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (board[i][j] != 'X' && board[i][j] != 'O')
				return true;
	//Checking the if game already draw
	draw = true;
	return false;
}
//Program Main Method
int main()
{
	cout<<"	  	  	  ~~ T I C K -- T A C -- T O E -- G A M E ~~"<<endl<<endl;
	cout<<"         	  	     ~~ FOR 2 PLAYERS ~~        "<<endl;
	cout<<" ABOUT GAME :"<<endl;
	cout<<" 1. The boxes are numbered from 1 to 9."<<endl;
	cout<<" 2. Player 1 plays with X and Player 2 plays with O."<<endl;
	cout<<" 3. To strike either X(for Player 1) or O(for player 2) in a box, a player must"<<endl
	    <<"    press the key for the number in the box of his/ her choice."<<endl;
	cout<<" 4. Do not press any latters or numbers that are not in the boxes."<<endl;
	cout<<" 5. Play only when its your turn to play. "<<endl;
	cout<<"	  	  	  	   ~~ ENJOY THE GAME ~~ "<<endl<<endl;
	while(gameover())
	{
		display_board();
		player_turn();
		gameover();
	}
	if(turn == 'X' && draw == false)
	{
		cout<<"	  	  	  ~~ CONGRATULATIONS!! ~~"<<endl<<"             Player with 'O'(Player 2) has won the game."<<endl<<endl;
	}
	else if(turn == 'O' && draw == false)
	{
		cout<<"	  	  	  ~~ CONGRATULATIONS!! ~~"<<endl<<"	           Player with 'X'(Player 1) has won the game."<<endl<<endl;
	}
	else
		cout<< "	   	   ~~ GAME DRAW!!! ~~"<<endl<<endl;
}

