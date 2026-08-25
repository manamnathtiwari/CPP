// Number Spiral

#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
const i64 INF = 1e18;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Code Starts Here
    int t;
    cin >> t;

    while (t--) {

        i64 y, x;
        cin >> y >> x;

        i64 n = max(y, x);
        i64 ans;

        if (n & 1 == 1) {

            if (x == n)
                ans = n * n - y + 1;
            else
                ans = (n - 1) * (n - 1) + x;

        } else {

            if (y == n)
                ans = n * n - x + 1;
            else
                ans = (n - 1) * (n - 1) + y;
        }

        cout << ans << '\n';
    }

    // Questions will be written completely in the last

    auto end = chrono::high_resolution_clock::now();

    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);

    cerr << "Time measured: "
         << elapsed.count() * 1e-9
         << " seconds.\n";

    return 0;
}

/*



*/