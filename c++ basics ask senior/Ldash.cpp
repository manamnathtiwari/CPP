/*
L. Max Subarray
time limit per test1 second
memory limit per test256 megabytes
A sub-array of array is an array composed from a contiguous block of the original array's elements.

In other words A sub-array A[i-j], where (1 ≤ i ≤ j ≤ N), is a sequence of integers Ai, Ai + 1, ..., Aj.

For Example :

IF array = [1,6,3,7] then the subarrays are [1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7] .

Something like [1,3] would not be a sub-array as it's not a contiguous subsection of the original array.

Given a number N and an array A of N numbers. Print the maximum number of every sub-array separated by space.

Input
First line contains a number T (1 ≤ T ≤ 5) number of test cases.

Each test case contains two lines:

First line contains a number N (1 ≤ N ≤ 100) number of elements.
Second line contains N numbers ( - 105 ≤ Ai ≤ 105).
Output
For each test case print a single line contains the maximum number of every sub-array separated by space.

print the answer in any order.
*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];
//         // Loop through subarrays
//         for (int i = 0; i < n; ++i)
//         {
//             int current_max = arr[i];
//             for (int j = i; j < n; ++j)
//             {
//                 current_max = max(current_max, arr[j]);
//                 cout << current_max << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        vector<vector<int>> list;

        // Generate all subarrays and store them
        for (int i = 0; i < n; ++i)
        {
            vector<int> temp;
            for (int j = i; j < n; ++j)
            {
                temp.push_back(arr[j]);
                list.push_back(temp); // store current subarray
            }
        }

        // Print all subarrays
        cout << "All subarrays:\n";
        for (auto sub : list)
        {
            cout << "[ ";
            for (int num : sub)
                cout << num << " ";
            cout << "]\n";
        }

        // For each subarray, print max
        for (auto sub : list)
        {
            int maxVal = *max_element(sub.begin(), sub.end());
            cout << maxVal << " ";
        }

        cout << "\n";
    }

    return 0;
}
