// Nested Ranges Count

#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
const i64 INF = 1e18;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

vector<int> bit;
int m;

void update(int idx){
    while(idx <= m){
        bit[idx]++;
        idx += idx & (-idx);
    }
}

int query(int idx){
    int sum = 0;
    while(idx > 0){
        sum += bit[idx];
        idx -= idx & (-idx);
    }
    return sum;
}

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Code Starts Here

    int n;
    cin >> n;

    vector<array<int,3>> ranges;
    vector<int> right;

    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;

        ranges.push_back({l, r, i});
        right.push_back(r);
    }

    // Coordinate Compression
    sort(right.begin(), right.end());
    right.erase(unique(right.begin(), right.end()), right.end());

    m = right.size();
    bit.assign(m + 1, 0);

    sort(ranges.begin(), ranges.end(), [&](auto a, auto b){

        if(a[0] == b[0])
            return a[1] > b[1];

        return a[0] < b[0];
    });

    vector<int> contains(n);
    vector<int> contained(n);

    // -------------------------------
    // Find how many ranges each contains
    // -------------------------------

    for(int i = n - 1; i >= 0; i--){

        int pos = lower_bound(right.begin(), right.end(), ranges[i][1]) - right.begin() + 1;

        contains[ranges[i][2]] = query(pos);

        update(pos);
    }

    // Reset BIT
    bit.assign(m + 1, 0);

    // -------------------------------
    // Find how many ranges contain each
    // -------------------------------

    for(int i = 0; i < n; i++){

        int pos = lower_bound(right.begin(), right.end(), ranges[i][1]) - right.begin() + 1;

        contained[ranges[i][2]] = i - query(pos - 1);

        update(pos);
    }

    for(int i = 0; i < n; i++)
        cout << contains[i] << " ";

    cout << "\n";

    for(int i = 0; i < n; i++)
        cout << contained[i] << " ";

    cout << "\n";

    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*

Algorithm

1. Store every range as {left, right, original_index}.

2. Coordinate compress all right endpoints since they can be up to 1e9.

3. Sort ranges:
      Left  -> Increasing
      Right -> Decreasing (if left is same)

4. First Pass (Right -> Left):
      Maintain all right endpoints seen so far.
      contains[i] = number of right endpoints <= current right.

5. Clear BIT.

6. Second Pass (Left -> Right):
      Previous ranges already satisfy left <= current left.
      contained[i] = total previous ranges - ranges having right < current right.

Time Complexity:
O(n log n)

Space Complexity:
O(n)

*/