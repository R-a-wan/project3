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
void player_turn(){
    if(turn == 'X')
    {
        cout<<"ntPlayer-1[X] turn: ";
    }
    else if(turn == 'O')
    {
        cout<<"ntPlayer-2[O] turn: ";
    }
    cin>>choice;

    case 1: row=0;column=0;break;
    case 2: row=0;column=1;break;
    case 3: row=0;column=2;break;
    case 4: row=1;column=0;break;
    case 5: row=1;column=1;break;
    case 6: row=1;column=2;break;
    case 7: row=2;column=0;break;
    case 8: row=2;column=1;break;
    case 9: row=2;column=2;break;
    default:
       cout<<"Invalid Move";
    if(turn == 'X' && board[row][column]!='X' && board[row][column]!='O'){
        board[row][column]='X';
        turn ='O';
    }
    else if(turn == 'O' && board[row][column]!='X' && board[row][column]!='O'){
        board[row][column]='O';
        turn ='X';
    }
    else{
        cout<<"Box already filled, choose another";
        player_turn();   
    }
    dis_board();
}
bool game_over(){
     for(int i =0; i<3; i++)

         //check for win for simple row and simple column
         if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i]){
             return false;
         }
         //check for win for both diagonals
         if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][2]==board[2][0]){
             return false;
         }
         //check the game is in continue mode or not
         for(int i =0; i<3; i++)
             for(int j =0; j<3; j++)
                    if(board[i][j]!='X' && board[i][j]!='O')
                        return true;
         draw = true;
         return false;
     
}

int main(){
    cout<<"TIC-TACK-TOE\n";
    cout<<"For two players\n";
    while(game_over()){
         display_board();
         player_turn();
         game_over();
        
    }
    if(turn =='X' && draw == false){
        cout<<"Congratulations! Player with 'X' has won";
    }
    else if(turn =='O' && draw == false){
        cout<<"Congratulations! Player with 'X' has won";
    }
    else{
        cout<<"Computer turn\n";
        display_board();
         while(game_over()){
         display_board();
         player_turn();
         game_over();
        
    }
    }
}


