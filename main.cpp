#include <iostream>
#include <stdlib.h>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row, column;
char turn = 'X';
bool draw = false;

void dis_board()
{
    system("cls");
    cout<<"\n\n Tic Tac Toe game \n\n";
    cout<<"Player 1(X) Player 2(O)";

    cout<<"   |   |   "<<endl;
    cout<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;

}
