#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    //normal priority_queue is max heap to make it min heap 
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap

    while(q--) {
        string s;
        cin >> s;

        if(s == "push") {
            int temp;
            cin >> temp;
            pq.push(temp);
        }
        else if(s == "top") {
            cout << pq.top() << endl;
        }
        else if(s == "pop") {
            pq.pop();
        }
    }
}
