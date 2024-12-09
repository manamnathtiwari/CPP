// Hola this is 9th December , and I am your friend manam coding and solving some begginer level problems on codecchef
/*

Problem Statement 

AI is Coming
You are given an assignment from your institute.

Each assignment has a difficulty value between 
1 and 
100 (both inclusive).

AI can solve an assignment if and only if the difficulty of the assignment is less than or equal to 
60
60.

Your current assignment has difficulty 
X
X.
Is AI capable of solving your assignment?
Print "YES" if it is, and "NO" if it isn't (without the quotes).

Input Format
The first and only line of input will contain a single integer 
X
X, denoting the difficulty of your assignment.
Output Format
If AI is capable of solving your assignment output "YES", otherwise print "NO" (without quotes).
Each character of the output may be printed in either uppercase or lowercase, i.e, the strings no, NO, No, and nO will all be treated as equivalent.

Constraints
1
≤
X
≤
100
1≤X≤100


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<=60){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}