/*
Given a number N. Print the factorial of number N.

Input
First line contains a number T (1 ≤ T ≤ 15) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 20)

Output
For each test case print a single line contains the factorial of N.
*/
#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return 1LL * n * fact(n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
}
