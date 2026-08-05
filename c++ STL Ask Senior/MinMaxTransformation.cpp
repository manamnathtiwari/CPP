// Min max Transformation

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

        int n;
        cin >> n;
        vector<i64> a;
        vector<i64> b;
        
        //Inputs 
        for (int i = 0; i < n; ++i) {
            i64 temp;
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; ++i) {
            i64 temp;
            cin >> temp;
            b.push_back(temp);
        }

        // Solve for dmin
        vector<i64> dmin(n);
        for (int i = 0; i < n; ++i) {
            // Returns an iterator to the first element >= a[i]
            auto it = lower_bound(b.begin(), b.end(), a[i]);
            dmin[i] = (*it) - a[i];
        }
        // Printing dmin
        for (int i = 0; i < n; ++i) {
            cout << dmin[i] << " ";
        }
        cout << endl;
        

        // Solve for dmax
        vector<i64> dmax(n);
        int j = n - 1;
        for (int i = n - 1; i >= 0; --i) {
            dmax[i] = b[j] - a[i];
            if (i > 0 && b[i - 1] < a[i]) {

            }
        }
        // Printing dmax
        for (int i = 0; i < n; ++i) {
            cout << dmax[i] << " ";
        }
        cout << endl;
    }

    // Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}

/*

*/