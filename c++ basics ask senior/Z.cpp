/*
Z. Three Numbers
time limit per test3 seconds
memory limit per test256 megabytes
Given two numbers K
 and S
. Determine how many different values of X,Y
 and Z
 such that (0≤X,Y,Z≤K)
 and X+Y+Z=S
.

Input
Only one line containing two numbers K
 and S
 (0≤K≤3000,0≤S≤3K)
.

Output
Print the answer required above.

*/

#include <bits/stdc++.h>
using namespace std;

int values(int k, int s)
{
    int ct = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int z = s - i - j;
            if (z >= 0 && z <= k)
            {
                ct++;
            }
        }
    }
    return ct;
}

// The abpve exceeds time limit hence we have to use the mathematical formula based approach to solve this problem
// hence we meed to optimize the solutio by z = s-i-j
// We reduced the complexity from O(k^3) to O(k^2)
// as time limit is 3 sec we need to reduce the complexity to O(k^2) or less than

int main()
{
    int k, s;
    cin >> k >> s;
    int result = values(k, s);
    cout << result << endl;
}