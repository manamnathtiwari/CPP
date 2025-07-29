#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> a(26);
    for (int i = 0; i < 26; ++i) cin >> a[i];

    vector<int> lf(n, -1), rt(n, -1);

    int last = -1;
    // Fill left neighbor costs
    for (int i = 0; i < n; ++i) {
        if (s[i] != '?') last = a[s[i] - 'a'];
        else lf[i] = last;
    }

    last = -1;
    // Fill right neighbor costs
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] != '?') last = a[s[i] - 'a'];
        else rt[i] = last;
    }

    // Replace all '?'
    for (int i = 0; i < n; ++i) {
        if (s[i] == '?') {
            int minCost = INT_MAX;
            char bestChar = 'a';

            for (int j = 0; j < 26; ++j) {
                int curCost = 0;
                if (lf[i] != -1) curCost += abs(a[j] - lf[i]);
                if (rt[i] != -1) curCost += abs(a[j] - rt[i]);

                if (curCost < minCost || (curCost == minCost && j + 'a' < bestChar)) {
                    minCost = curCost;
                    bestChar = 'a' + j;
                }
            }
            s[i] = bestChar;
        }
    }

    // Calculate total cost
    ll totalCost = 0;
    for (int i = 1; i < n; ++i) {
        totalCost += abs(a[s[i] - 'a'] - a[s[i - 1] - 'a']);
    }

    cout << totalCost << '\n';
    cout << s << '\n';

    return 0;
}
