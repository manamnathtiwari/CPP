#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
const i64 INF = 1e18;

struct Fenwick {
    int n;
    vector<i64> bit; // Changed to i64 to handle large cumulative sums

	// Constructor
    Fenwick(int sz) {
        n = sz;
        bit.assign(n + 1, 0);
    }

    inline int lowbit(int x) {
        return x & (-x);
    }

    void update(int i, i64 delta) {
        while (i <= n) {
            bit[i] += delta;
            i += lowbit(i);
        }
    }

    i64 query(int i) {
        i64 ans = 0;
        while (i > 0) {
            ans += bit[i];
            i -= lowbit(i);
        }
        return ans;
    }

    i64 rangeQuery(int l, int r) {
        if (l > r || l < 1) return 0;
        return query(r) - query(l - 1);
    }
};

void solve() {
    int n, q;
    if (!(cin >> n >> q)) return;

    Fenwick ft(n);

    // Read initial array and build the Fenwick tree
    for (int i = 1; i <= n; i++) {
        i64 val;
        cin >> val;
        ft.update(i, val);
    }

    // Process Queries
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int idx;
            i64 delta;
            cin >> idx >> delta;
            ft.update(idx, delta);
        } else if (type == 2) {
            int l, r;
            cin >> l >> r;
            cout << ft.rangeQuery(l, r) << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Set up for multiple test cases if needed; default is 1
    int t = 1; 
    // cin >> t; 
    while (t--) {
        solve();
    }
    
    return 0;
}