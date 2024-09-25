#include <bits/stdc++.h>
#include <stdlib.h>
#include <random>
using namespace std;
random_device rd;
mt19937 gen(rd());

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

//Function to return the game status
int random(int low, int high)
{
    uniform_int_distribution<> dist(low, high);
    return dist(gen);
}
int checkwin()
{
    if(square[1] == square[2] && square[2]== square[3])
    {
        return 1;
    }
    else if(square[4] == square[5] && square[5]== square[6])
    {
        return 1;
    }
    else if(square[7] == square[8] && square[8]== square[9])
    {
        return 1;
    }
    else if(square[1] == square[4] && square[4]== square[7])
    {
        return 1;
    }
    else if(square[2] == square[5] && square[5]== square[8])
    {
        return 1;
    }
    else if(square[3] == square[6] && square[6]== square[9])
    {
        return 1;
    }
    else if(square[1] == square[5] && square[5]== square[9])
    {
        return 1;
    }
    else if(square[3] == square[5] && square[5]== square[7])
    {
        return 1;
    }
    else if(square[1] != '1' && square[2]!= '2' && square[3]!= '3' && square[4]!= '4' && square[5]!= '5' && square[6]!= '6' && square[7]!= '7' && square[8]!= '8' && square[9]!= '9')
    {
        return 0;
    }
    else{
        return -1;
    }
}

/*
system("cls");
It is used to pass the commands that can be executed in the command processor or the terminal of the operating system,
 and finally returns the command after it has been completed
*/
void board()
{
    system("cls");
    cout<<"\n\n Tic Tac Toe game \n\n";
    cout<<"Player 1(X) Player 2(O)";

    cout<<"   |   |   "<<endl;
    cout<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;

}

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
    }while(i == -1);

    board();
    if(i == 1)
    {
        cout<<"\aCongratulations! Player "<< --player<<" WINS!";
    }
    else{
        cout<<"computer game\n";
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
      
    }

    return 0;
}
