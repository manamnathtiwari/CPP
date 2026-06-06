// Pair of Topics
// C++ STL

#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
const i64 INF = 1e18;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Code Starts Here

    int num;
    cin >> num;

    vector<i64> a;
    vector<i64> b;

    // CHANGE 1:
    // Instead of storing all pair sums in a_res and b_res
    // store (a[i] - b[i])

    vector<i64> diff;

    i64 output = 0; // CHANGE 2: answer can be > int

    for(int i = 0; i < num; ++i){
        i64 temp;
        cin >> temp;
        a.push_back(temp);
    }

    for(int i = 0; i < num; ++i){
        i64 temp;
        cin >> temp;
        b.push_back(temp);
    }

    // CHANGE 3:
    // ai + aj > bi + bj
    // becomes
    // (ai - bi) + (aj - bj) > 0

    for(int i = 0; i < num; ++i){
        diff.push_back(a[i] - b[i]);
    }

    // CHANGE 4:
    // Sort for Two Pointer approach

    sort(diff.begin(), diff.end());

    int left = 0;
    int right = num - 1;

    // CHANGE 5:
    // No nested loops
    // O(n) after sorting

    while(left < right){

        if(diff[left] + diff[right] > 0){

            // all elements from left to right-1
            // form valid pairs with diff[right]

            output = output + (right - left);

            right--;
        }
        else{
            left++;
        }
    }

    cout << output;

    //Questions will be written completely in the last

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);

    cerr << "Time measured: "
         << elapsed.count() * 1e-9
         << " seconds.\n";

    return 0;
}