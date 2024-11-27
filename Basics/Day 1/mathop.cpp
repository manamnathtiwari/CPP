//  Day 2 of learning C++ from scratch
//  Writing a CPP program to do mathematical basic operations 
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double n1,n2;
    int choice ;
    cout<<"Enter any two numbers\n";
    cin>>n1;cin>>n2;
    cout<<"Enter your choice \n";
    cin>>choice;

    switch(choice){
        case 1 :
                cout<<"Results : "<<n1 + n2 ;
                break;
        case 2 :
                cout<<"Results : "<<n1 - n2 ;
                break;
        case 3 :
                cout<<"Results : "<<n1 * n2 ;
                break;
        case 4 :
                cout<<"Results : "<<n1 / n2 ;
                break;
        case 5 :
                cout<<"Results : "<<static_cast<int>(n1)%static_cast<int>(n2);
                break;
        case 6 :
                cout<<"Results : "<< pow(n1,n2) ;
                break;
        case 7 :
                cout<<"Results : "<< sqrt(n1)<< ":"<<sqrt(n2);
                break;
        case 8 :
                cout<<"Results : "<< log(n1) << ":"<< log(n2) ;
                break;
        default:
        cout<<"Enter the right choice between 1-8 ";
    }
return 0;         

}