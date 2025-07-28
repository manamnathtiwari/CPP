// Is B a subsequence of A?

/*
a sub sequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

IF array = [1,6,3 , 7] then the some subsequences are [1,3,7] , [6,7] , [1] , [6,3,7] , [1,7] .

Something like [3,1] and [6 , 7 , 1] would not be sub sequences of the array [1,6,3 , 7].

Given 2 numbers N
, M
 and 2 arrays A
 consists of N
 numbers and B
 consists of M
 numbers. Determine whether B
 is a sub-sequence of A
 or not.

Note: The array B
 is called a sub-sequence of A
 if it's possible to remove zero or some elements from A
 to get B
.

For example: if A
=[1,4,7], and B
 is [1], [1,4], [1,7],[1,4,7] or [4,7] then B
 is a sub-sequence of A
.

Input
First line contains two numbers N,M
 (1≤N≤104,1≤M≤N)
 , the sizes of arrays A
 and B
 respectively.

Second line contains N
 numbers (1≤Ai≤109)
 elements of array A
.

Third line contains M
 numbers (1≤Bi≤109)
 elements of array B
.

Output
Print "YES" (without the quotes), if B
 is a sub-sequence of A
 otherwise, print "NO" (without the quotes).



*/

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> subsets;
// vector<int> nums;
// void generate(vector<int> &subset, int i, vector<int> nums)
// {
//     // Base condition
//     if (i == nums.size())
//     {
//         subsets.push_back(subset);
//         return;
//     }
//     // ith element not in subset
//     generate(subset, i + 1, nums);

//     // ith elememt in subset
//     subset.push_back(nums[i]);
//     generate(subset, i + 1, nums);
//     subset.pop_back();
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n), b(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     vector<int> empty;
//     bool flag = false;
//     generate(empty, 0, a);
//     for (auto subset : subsets)
//     {
//         if (subset == b)
//         {
//             cout << "YES";
//             flag = true;
//         }
//     }
//     if (flag == false)
//     {
//         cout << "NO";
//     }
// }

// the above method is memory time exceeded hence need a better solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
            ++j;
        ++i;
    }
    if (j == m)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
