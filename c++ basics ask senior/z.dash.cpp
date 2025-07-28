// Binary Search

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (q--)
    {
        int x;
        cin >> x;
        if (binary_search(a.begin(), a.end(), x))
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
}