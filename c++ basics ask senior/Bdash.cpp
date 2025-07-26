/*
Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Third line contains a number X (0 ≤ X ≤ 109).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1.
*/

#include <bits/stdc++.h>
using namespace std;

long long find(long long f, long long *arr, long long i, long long n)
{
    if (arr[i] == f)
    {
        return i;
    }
    if (i > n)
    {
        return -1;
    }
    return find(f, arr, i + 1, n);
}

int main()
{
    long long n; /*
 Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

 Note: X may be found once or more than once and may not be found.

 Input
 First line contains a number N (1 ≤ N ≤ 105) number of elements.

 Second line contains N numbers (0 ≤ Ai ≤ 109).

 Third line contains a number X (0 ≤ X ≤ 109).

 Output
 Print the position of X in the first time you find it. If it doesn't exist print -1.
 */
#include <bits/stdc++.h>
    using namespace std;

    long long find(long long f, long long *arr, long long i, long long n)
    {
        if (i >= n)
        {
            return -1;
        }
        if (arr[i] == f)
        {
            return i;
        }
        return find(f, arr, i + 1, n); // recursive call
    }

    int main()
    {
        long long n;
        cin >> n;

        long long a[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long f;
        cin >> f;

        cout << find(f, a, 0, n) << endl;
    }
