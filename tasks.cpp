#include <bits/stdc++.h>
#include <stdlib.h>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
//Get rand. numbers for comp.
int random(int low, int high)
{
    std::uniform_int_distribution<> dist(low, high);
    return dist(gen);
}


char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int choice;
int row, column;
char turn = 'X';
bool draw = false;

void dis_board()
{
    system("cls");
    std::cout<<"\n\n Tic Tac Toe game \n\n";
    std::cout<<"Player 1(X) Player 2(O)";

    std::cout<<"   |   |   "<<std::endl;
    std::cout<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;

}

void player_turn(){
    if(turn == 'X')
    {
        std::cout<<"ntPlayer-1[X] turn: ";
    }
    else if(turn == 'O')
    {
        std::cout<<"ntPlayer-2[O] turn: ";
    }
    std::cin>>choice;
  switch(choice){
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
       std::cout<<"Invalid Move";
  }
    
    if(turn == 'X' && board[row][column]!='X' && board[row][column]!='O'){
        board[row][column]='X';
        turn ='O';
    }
    else if(turn == 'O' && board[row][column]!='X' && board[row][column]!='O'){
        board[row][column]='O';
        turn ='X';
    }
    else{
        std::cout<<"Box already filled, choose another";
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

bool i;
int p1win=0,p1loss=0,p2win=0,p2loss=0;
void start_play(){
   
    while(game_over()){
         dis_board();
         player_turn();
         game_over();
        
    }
    if(turn =='X' && game_over() == false){
        std::cout<<"Congratulations! Player with 'X' has won";
        p1win++;
        p2loss++;
    }
    else if(turn =='O' && game_over() == false){
        std::cout<<"Congratulations! Player with 'O' has won";
        p1loss++;
        p2win++;
    }
    else{
        std::cout<<"Computer turn\n";
        
        do{
        choice = random(1,9);
        
         dis_board();
        if(choice == 1 && board[0][0]==' ')
        {
            board[0][0]= turn;
        }
        else if(choice == 2 && board[0][1]==' ')
        {
            board[0][1]= turn;
        }
        else if(choice == 3 && board[0][2]==' ')
        {
            board[0][2]= turn;
        }
        else if(choice == 4 && board[1][0]==' ')
        {
            board[1][0]= turn;
        }
        else if(choice == 5 && board[1][1]==' ')
        {
            board[1][1]= turn;
        }
        else if(choice == 6 && board[1][2]==' ')
        {
            board[1][2]= turn;
        }
        else if(choice == 7 && board[2][0]==' ')
        {
            board[2][0]= turn;
        }
        else if(choice == 8 && board[2][1]==' ')
        {
            board[2][1]= turn;
        }
        else if(choice == 9 && board[2][2]==' ')
        {
            board[2][2]= turn;
        }
        i = game_over();
        }while(i = true);
        }    
    
    }

void main_menu(){
    int op;
    std::cout<<"choose one of the options:\n";
    std::cout<<"[1] New Game\n";
    std::cout<<"[2] History\n";
    std::cout<<"[3] Clear History\n";
    std::cin>>op;
     switch(op){
        case 1:
          start_play();
          break;
        case 2:
          view_history();
          break; 
        case 3:
          clear_history();
          break;   
     }
}

void view_history(){
     int op;
     std::cout<<"Player 1 has won"<<p1win<<"Times\n";
     std::cout<<"Player 2 has won"<<p2win<<"Times\n";
     std::cout<<"[0] Back to main\n";
     std::cout<<"[1] New Game\n";
     std::cout<<"[2] History\n";
     std::cin>>op;
     switch(op){
        case 1:
          main_menu();
          break;
        case 2:
          start_play();
          break; 
        case 3:
          view_history();
          break;   
     }
}

//To clear history
void clear_history(){
    p1loss=0;
    p1win=0;
    p2loss=0;
    p2win=0;
}
