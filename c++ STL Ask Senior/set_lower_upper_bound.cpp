#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    set<long long> s;

    while (q--) {
        string type;
        long long x;
        cin >> type >> x;

        if (type == "insert") {
            s.insert(x);
        }
        else if (type == "find") {
            if (s.find(x) != s.end()) cout << "found\n";
            else cout << "not found\n";
        }
        else if (type == "lower_bound") {
            auto it = s.lower_bound(x);
            if (it != s.end()) cout << *it << "\n";
            else cout << -1 << "\n";
        }
        else if (type == "upper_bound") {
            auto it = s.upper_bound(x);
            if (it != s.end()) cout << *it << "\n";
            else cout << -1 << "\n";
        }
    }

    return 0;
}
