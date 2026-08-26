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

    int N;
    cin >> N;

    int odd = 0;

    for (int i = 0; i < N; i++) {
        i64 x;
        cin >> x;

        if (x % 2 == 1) {
            odd++;
        }
    }

    if (odd % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    // Code Ends Here

    return 0;
}