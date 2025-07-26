/*

Increasing Array Problem

You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,\ldots,x_n: the contents of the array.
Output
Print the minimum number of moves.
Constraints

1 \le n \le 2 \cdot 10^5
1 \le x_i \le 10^9

Example
Input:
5
3 2 5 1 7

Output:
5
*/
#include <bits/stdc++.h>
using namespace std;

long long move(long long a[], long long n)
{
    long long moves = 0;
    for (long long i = 0; i < n; ++i)
    {
        if (i == 0)
            continue;
        if (a[i] < a[i - 1])
        {
            while (a[i] != a[i - 1])
            {
                a[i]++;
                moves++;
            }
        }
    }
    return moves;
}

int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << move(a, n) << endl;
}