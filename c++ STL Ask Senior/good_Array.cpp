#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    if (!(cin >> n)) return 0;
    const int MAXA = 1000000;
    vector<int> a(n);
    long long total = 0;
    vector<int> freq(MAXA + 5, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total += a[i];
        freq[a[i]]++;
    }
    
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        long long newSum = total - a[i];
        if (newSum % 2 != 0) continue;
        long long want = newSum / 2;
        
        // if want cannot be an existing array value, skip
        if (want < 0 || want > MAXA) continue;
        
        // remove current element temporarily
        freq[a[i]]--;
        if (freq[(int)want] > 0) res.push_back(i + 1);
        // restore
        freq[a[i]]++;
    }
    
    cout << res.size() << "\n";
    for (size_t i = 0; i < res.size(); ++i) {
        if (i) cout << " ";
        cout << res[i];
    }
    if (!res.empty()) cout << "\n";
    return 0;
}
