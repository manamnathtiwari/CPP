/*

Repetitions

You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 \le n \le 10^6

Example
Input:
ATTCGGGA

Output:
3

*/

#include <bits/stdc++.h>
using namespace std;

void repetitions(string s)
{
    int max = 0;
    int temp = 0;

    char ch = s[0];

    for (int i = 0; i < s.size(); ++i)
    {
        if (ch == s[i])
        {
            temp++;
        }
        else
        {
            ch = s[i];
            temp = 1;
        }
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << max << endl;
}

int main()
{
    string n;
    cin >> n;
    repetitions(n);
}