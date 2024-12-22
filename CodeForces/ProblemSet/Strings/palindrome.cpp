/*
A palindrome is a string that reads the same from left to right as from right to left. For example, abacaba, aaaa, abba, racecar are palindromes.

You are given a string s
 consisting of lowercase Latin letters. The string s
 is a palindrome.

You have to check whether it is possible to rearrange the letters in it to get another palindrome (not equal to the given string s
).

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains a string s
 (2≤|s|≤50
) consisting of lowercase Latin letters. This string is a palindrome.

Output
For each test case, print YES if it is possible to rearrange the letters in the given string to get another palindrome. Otherwise, print NO.

You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).
*/

// They are not asking to check the palindrome instead they are asking to see possibility of arranging it in any order so that it becomes palindrome


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(t;t>0;--t){
        string s;
        cin>>s;
        bool flag = true;
        int sum = 0;
        for(int i = 0;i<s.size()-1;i++){
            for(int j = 0;j<s.size()-1;j++){
                if(s[i]==s[j]){
                    sum = sum + 1;
                }
                if(sum%2 == 1){
                    flag = false;
                    continue;
                }
            }
        }
        cout<<flag;

    }
}