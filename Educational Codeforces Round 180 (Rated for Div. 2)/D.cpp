/*
Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

Input
The input contains several passwords.

Each line contains a number X (103 ≤ X ≤ 104 - 1).

Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val = 1;

    while (val != 0)
    {
        int x;
        cin >> x;
        if (x == 1999)
        {
            cout << "Correct" << endl;
            val = 0;
        }
        else
            cout << "Wrong" << endl;
    }
}