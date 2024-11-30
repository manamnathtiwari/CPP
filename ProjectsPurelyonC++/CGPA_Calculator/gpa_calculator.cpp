// This is 30th November , 2024 . Im your semi-nerdy friend trying to do a project 

// Let's give a fancy name .It's called

/*

        The GPA Calculator 

*/

//  I know the name sucks but yeah that's what we are going to do build today !

#include<bits/stdc++.h>
using namespace std;

int main(){

    // Using the variables , don't expect me to code out database and all in the first project itself anyone will be like what is this guys crazy or what haa... 
    string name ;
    int n ;
    int arr[n];
    int result ;
    int sum = 0;

    cout<<"******************Welcome to THE GPA CALCULATOR*****************";
    cout << "\n\n\n\n" << "Yeah i know guys GPA sucks but this tool won't LOL!"<<endl;
    
    cout << "Enter your name\n";
    cin>>name;
    cout<<"Enter the number of Subjects you have written in this term";
    cin>>n;
    for(int i = 0 ;i<n;i++){
        cout <<"Enter your "<<i+1<<"th subject marks in terms out of 100 \n ";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout <<"Total marks obtained in overall by "<<name<< " is "<< sum <<"\n"<<"The percentage = "<<sum/n<<"\n";
    if(sum/n >=75) cout <<"Congratulations you have scored a distinguision\n";

    return 0;
    
}