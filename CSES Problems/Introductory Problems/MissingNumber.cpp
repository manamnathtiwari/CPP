/*
You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 \le n \le 2 \cdot 10^5

Example
Input:
5
2 3 1 5

Output:
4

*/

#include <bits/stdc++.h>
using namespace std;

// Not a good approach instead try the sum approach'

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n - 1];
//     int arrr[n - 1];
//     for (int i = 1; i <= n - 1; ++i)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i <= n - 1; ++i)
//     {
//         int m = arr[i];
//         arrr[m] = arr[i];
//     }
//     for (int i = 1; i <= n - 1; ++i)
//     {
//         if (i != arrr[i])
//         {
//             cout << i << endl;
//         }
//     }
// }

int main()
{
    int n;
    cin >> n;

    long long expected_sum = 1LL * 0.5 * n * (n + 1);
    long actual_sum = 0;
    for (int i = 1; i <= n - 1; ++i)
    {
        int temp;
        cin >> temp;
        actual_sum = actual_sum + temp;
    }
    cout << expected_sum - actual_sum << endl;
}