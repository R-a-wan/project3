#include <bits/stdc++.h>
#include  "tasks.h"
using namespace std;
int main(){
    cout<<"TIC-TAC-TOE\n\n";
    

    int option;
    cin>>option;
    switch(option)
    {
        case 1:
          start_play();
          break;
        case 2:
          view_history();
          break;  
        case 3:
          clear_history();
          break;  
        default:
          cout<<"Ended game\n";
          break;  
    }

}
