// Q. Count Subarrays

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
        int a[n];
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            int j = i;
            // Extend the subarray while it is non-decreasing
            while (j < n && (j == i || a[j - 1] <= a[j]))
            {
                count++;
                j++;
            }
        }
        cout << count << endl;
    }
}