/*
Permutations

A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

*/

#include <bits/stdc++.h>
using namespace std;

void beautiful(int n)
{
    int arr[n]{};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i - j > 1 && arr[i] == 0 && arr[j] == 0)
            {
                arr[i] = 1;
                arr[j] = 1;
                cout << i << " " << j << " ";
            }
        }
    }

    int testarr[n]{};
    if (arr[n] == testarr[n])
    {
        cout << "NO SOLUTION";
    }
}

int main()
{
    int n;
    cin >> n;
    beautiful(n);
}