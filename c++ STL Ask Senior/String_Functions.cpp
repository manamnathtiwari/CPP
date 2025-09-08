#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string query;
        cin >> query;

        if (query == "pop_back") {
            if (!s.empty()) s.pop_back();
        }
        else if (query == "front") {
            if (!s.empty()) cout << s.front() << "\n";
        }
        else if (query == "back") {
            if (!s.empty()) cout << s.back() << "\n";
        }
        else if (query == "sort") {
            long long l, r;
            cin >> l >> r;
            l--, r--; // convert to 0-based
            if (l > r) swap(l, r);
            if (l >= 0 && r < (long long)s.size()) {
                sort(s.begin() + l, s.begin() + r + 1);
            }
        }
        else if (query == "reverse") {
            long long l, r;
            cin >> l >> r;
            l--, r--;
            if (l > r) swap(l, r);
            if (l >= 0 && r < (long long)s.size()) {
                reverse(s.begin() + l, s.begin() + r + 1);
            }
        }
        else if (query == "print") {
            long long pos;
            cin >> pos;
            pos--;
            if (pos >= 0 && pos < (long long)s.size()) {
                cout << s[pos] << "\n";
            }
        }
        else if (query == "substr") {
            long long l, r;
            cin >> l >> r;
            l--, r--;
            if (l > r) swap(l, r);
            if (l >= 0 && r < (long long)s.size()) {
                cout << s.substr(l, r - l + 1) << "\n";
            }
        }
        else if (query == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}
