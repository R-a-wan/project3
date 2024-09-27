#include <iostream>
#include <stdlib.h>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row, column;
char turn = 'X';
bool draw = false;

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
    else if(draw == true){
        cout<<"Computer turn\n";
        display_board();
         while(game_over()){
         display_board();
         player_turn();
         game_over();
        
    }
    }
}
