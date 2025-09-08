#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    set<int> distinct;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        distinct.insert(temp);
    }

    // put distinct elements in a sorted vector
    vector<int> arr(distinct.begin(), distinct.end());
    int sz = arr.size();

    while (q--) {
        int x;
        cin >> x;

        // number of elements < x
        int less = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        // number of elements > x
        int greater = arr.end() - upper_bound(arr.begin(), arr.end(), x);

        cout << less << " " << greater << "\n";
    }

    return 0;
}
