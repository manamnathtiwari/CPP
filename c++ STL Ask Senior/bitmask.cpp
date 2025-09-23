#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    long long n;
    cin >> q >> n;

    while (q--) {
        int type, x;
        cin >> type >> x;
        if (type == 1) {
            cout << ((n >> x) & 1) << "\n";
        } else if (type == 2) {
            n |= (1LL << x);
            cout << n << "\n";
        } else if (type == 3) {
            n &= ~(1LL << x);
            cout << n << "\n";
        } else if (type == 4) {
            n ^= (1LL << x);
            cout << n << "\n";
        }
    }
    return 0;
}
