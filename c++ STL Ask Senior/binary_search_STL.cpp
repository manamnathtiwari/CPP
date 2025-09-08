#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    // Sort the array for binary search
    sort(arr.begin(), arr.end());

    while (q--) {
        string s;
        long long x;
        cin >> s >> x;

        if (s == "binary_search") {
            if (binary_search(arr.begin(), arr.end(), x))
                cout << "found\n";
            else
                cout << "not found\n";
        }
        else if (s == "lower_bound") {
            auto it = lower_bound(arr.begin(), arr.end(), x);//lower bound means >=x
            if (it != arr.end())
                cout << *it << "\n";
            else
                cout << -1 << "\n";
        }
        else if (s == "upper_bound") {
            auto it = upper_bound(arr.begin(), arr.end(), x);//upper_bound means >x
            if (it != arr.end())
                cout << *it << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}
