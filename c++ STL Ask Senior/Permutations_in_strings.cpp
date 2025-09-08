#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string type;
        int x;
        cin >> type >> x;

        if (type == "next_permutation") {
            for (int i = 0; i < x; i++) {
                if (!next_permutation(s.begin(), s.end())) {
                    // if at last permutation, wrap around to the first
                    sort(s.begin(), s.end());
                }
            }
            cout << s << "\n";
        } 
        else if (type == "prev_permutation") {
            for (int i = 0; i < x; i++) {
                if (!prev_permutation(s.begin(), s.end())) {
                    // if at first permutation, wrap around to the last
                    sort(s.begin(), s.end(), greater<char>());
                }
            }
            cout << s << "\n";
        }
    }
}
