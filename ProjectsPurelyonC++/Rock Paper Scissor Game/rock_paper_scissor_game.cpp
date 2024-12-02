// Welcome to another beginer level project so this is another small time pass project that i am making to have fun and cancel out my loneliness in my life..
// Yeah creating a game that can be played by single persons anytime any where 
// Wheather you had a break up , single or no girl or boy in life 
// Don't worry we got your back 
// Introducing the Legendary "ROck Paper Scizzor"

#include<bits/stdc++.h>
using namespace std;

int main(){

    int points,input,random;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1,3);

    cout<<"Welcome mate ";
    cout<<"This is a game traditional played in the wonder land of Manam ; Just Joking ";
    cout<<"Your game is loading..........\n\n\n\n";
    cout<< "Symbols \n 1. for Rock \n 2 for Paper \n 3 for Scissor\n";
    points = 0;

    do{
        cout<< "Rock , Paper or Scissor";
        random = distrib(gen);
        cin>>input;
        if(input == 1 && random == 2){
            points = points-1;
            cout<< "You Lose ! Your Score"<<points;
        }
        else if(input == 2 && random == 3){
            points = points-1;
            cout<< "You Lose ! Your Score"<<points;
        }
        else if(input == 3 && random == 1){
            points = points-1;
            cout<< "You Lose ! Your Score"<<points;
        }
        else if (input ==1 && random ==3){
            points = points + 1;
            cout <<"You win ! Your Score"<<points;
        }
        else if (input ==2 && random == 1){
            points = points + 1;
            cout <<"You win ! Your Score"<<points;
        }
        else if (input ==3 && random ==2){
            points = points + 1;
            cout <<"You win ! Your Score"<<points;
        }

    }while (true);

    return 0;
}