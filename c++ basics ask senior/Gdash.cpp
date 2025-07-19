/*
Given a number N
 and an array A
 of N
 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (1≤Ai≤109)
.

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int arr2[n];
    for (int j = 0, i = n - 1; i >= 0, j < n; --i, ++j)
    {
        arr2[j] = arr[i];
    }
    bool flag = true;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != arr2[i])
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}