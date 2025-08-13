#include <bits/stdc++.h>
using namespace std;

typedef long long ll; // For large values

// Difference array concept
int main() {
    ll n, q;
    cin >> n >> q; // Read n first

    vector<ll> a(n + 1);         // Original array (1-based index)
    vector<ll> operations(n + 2, 0); // Difference array (extra space for R+1)

    // Input array
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // Process q queries
    while (q--) {
        ll L, R, val;
        cin >> L >> R >> val;
        operations[L] += val;
        operations[R + 1] -= val;
    }

    // Prefix sum on difference array
    for (ll i = 1; i <= n; ++i) {
        operations[i] += operations[i - 1];
    }

    // Apply operations to the original array
    for (ll i = 1; i <= n; ++i) {
        a[i] += operations[i];
    }

    // Output the updated array
    for (ll i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
