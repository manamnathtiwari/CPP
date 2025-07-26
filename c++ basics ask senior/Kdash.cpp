/*
K. Sum Digits
time limit per test2 seconds
memory limit per test256 megabytes
Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  106) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.K. Sum Digits
time limit per test2 seconds
memory limit per test256 megabytes
Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  106) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string m;
    cin >> n >> m;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += m[i] - '0';
    }
    cout << sum << endl;
}

// The string approach is better than any other approach