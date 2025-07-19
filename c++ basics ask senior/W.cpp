/*
Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Top half of the diamond
    for (int i = 1; i <= n; ++i)
    {
        for (int space = 1; space <= n - i; ++space)
            cout << " ";
        for (int star = 1; star <= 2 * i - 1; ++star)
            cout << "*";
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n; i >= 1; --i)
    {
        for (int space = 1; space <= n - i; ++space)
            cout << " ";
        for (int star = 1; star <= 2 * i - 1; ++star)
            cout << "*";
        cout << endl;
    }

    return 0;
}