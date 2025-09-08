#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    long long n;
    cin >> q >> n;

    while(q--) {
        int op;
        cin >> op;

        if(op == 1) {           // OR
            long long x;
            cin >> x;
            n = n | x;
            cout << n << endl;
        }
        else if(op == 2) {      // AND
            long long x;
            cin >> x;
            n = n & x;
            cout << n << endl;
        }
        else if(op == 3) {      // XOR
            long long x;
            cin >> x;
            n = n ^ x;
            cout << n << endl;
        }
        else if(op == 4) {      // NOT
            n = ~n;
            cout << n << endl;
        }
    }

    return 0;
}
