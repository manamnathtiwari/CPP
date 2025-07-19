/*
Given a number N
. Print all prime numbers between 1 and N
 inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are
*/

#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        if (check_prime(i))
        {
            cout << i << " ";
        }
    }
}
