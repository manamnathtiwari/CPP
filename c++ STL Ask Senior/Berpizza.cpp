// Berpizza
// Interesting pizza problem
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
    int q;
    cin >> q;

    priority_queue<pair<int,int>> pq;   // {money, -customer}
    queue<int> arrival;

    vector<bool> served(q + 2, false);

    int customer = 1;

    while (q--) {
        int qnum;
        cin >> qnum;

        if (qnum == 1) {
            int value;
            cin >> value;

            pq.push({value, -customer});
            arrival.push(customer);
            customer++;
        }

        else if (qnum == 2) {

            // Remove customers already served by Polycarp
            while (!arrival.empty() && served[arrival.front()])
                arrival.pop();

            int id = arrival.front();
            arrival.pop();

            served[id] = true;

            cout << id << " ";
        }

        else {

            // Remove customers already served by Monocarp
            while (!pq.empty() && served[-pq.top().second])
                pq.pop();

            auto p = pq.top();
            pq.pop();

            int id = -p.second;
            served[id] = true;

            cout << id << " ";
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}