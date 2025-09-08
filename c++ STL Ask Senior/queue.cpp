#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    queue<int> qe;

    while(q--) {
        string s;
        cin >> s;

        if(s == "push") {
            int temp;
            cin >> temp;
            qe.push(temp);
        }
        else if(s == "front") {
            cout << qe.front() << endl;
        }
        else if(s == "back") {
            cout << qe.back() << endl;

        }
        else if(s == "pop") {
            qe.pop();
        }
    }
}
