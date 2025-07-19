/*
Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}