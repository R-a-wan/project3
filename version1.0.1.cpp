#include <bits/stdc++.h>
#include <stdlib.h>
#include <random>
#include "needed.cpp"
using namespace std;
random_device rd;
mt19937 gen(rd());

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};


int random(int low, int high)
{
    uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

board();
/*
system("cls");
It is used to pass the commands that can be executed in the command processor or the terminal of the operating system,
 and finally returns the command after it has been completed
*/

int main()
{
    int player =1, i,choice;

    player = (player % 2)? 1:2;
    cout<<"Player : "<<player<<" Enter the number: ";
    cin>>choice;

    char mark;

    mark = (player==1)? 'X':'O';
    do{
        board();
        if(choice == 1 && square[1]=='1')
        {
            square[1]= mark;
        }
        else if(choice == 2 && square[2]=='2')
        {
            square[2]= mark;
        }
        else if(choice == 3 && square[3]=='3')
        {
            square[3]= mark;
        }
        else if(choice == 4 && square[4]=='4')
        {
            square[4]= mark;
        }
        else if(choice == 5 && square[5]=='5')
        {
            square[5]= mark;
        }
        else if(choice == 6 && square[6]=='6')
        {
            square[6]= mark;
        }
        else if(choice == 7 && square[7]=='7')
        {
            square[7]= mark;
        }
        else if(choice == 8 && square[8]=='8')
        {
            square[8]= mark;
        }
        else if(choice == 9 && square[9]=='9')
        {
            square[9]= mark;
        }

        i = checkwin();
        player++;
    }while(i == -1);//still playing

    board();
    if(i == 1)//game has ended
    {
        cout<<"\aCongratulations! Player "<< --player<<" WINS!";
        
    }
    else{ //if the game state is undefined or the user didn't enter a choice
        cout<<"computer game\n";
        do{
        choice = random(1,9);
        board();
        if(choice == 1 && square[1]=='1')
        {
            square[1]= mark;
        }
        else if(choice == 2 && square[2]=='2')
        {
            square[2]= mark;
        }
        else if(choice == 3 && square[3]=='3')
        {
            square[3]= mark;
        }
        else if(choice == 4 && square[4]=='4')
        {
            square[4]= mark;
        }
        else if(choice == 5 && square[5]=='5')
        {
            square[5]= mark;
        }
        else if(choice == 6 && square[6]=='6')
        {
            square[6]= mark;
        }
        else if(choice == 7 && square[7]=='7')
        {
            square[7]= mark;
        }
        else if(choice == 8 && square[8]=='8')
        {
            square[8]= mark;
        }
        else if(choice == 9 && square[9]=='9')
        {
            square[9]= mark;
        }
    i = checkwin();
        }while(i != -1);
    }

    return 0;
}
