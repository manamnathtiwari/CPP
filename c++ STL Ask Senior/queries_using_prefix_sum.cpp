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
    // Iss sher ka kitna ghatiya naam hai
    string s;cin>>s;
    int q;cin>>q;
    int n = (int)s.size();
    
    // Using prefix sum 
    vector<int> arr(n,0);
    for (int i = 1; i < n; ++i) {
        arr[i] = arr[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }
    
    while(q--){
    	int l,r;cin>>l>>r;
    	l--;r--;
    	cout<<arr[r]-arr[l]<<endl;
    }
    
    
    
    
    
    
    
    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*
Ilya the Lion wants to help all his friends with passing exams. They need to solve the following problem to pass the IT exam.

You've got string s = s1s2... sn (n is the length of the string), consisting only of characters "." and "#" and m queries. Each query is described by a pair of integers li, ri (1 ≤ li < ri ≤ n). The answer to the query li, ri is the number of such integers i (li ≤ i < ri), that si = si + 1.

Ilya the Lion wants to help his friends but is there anyone to help him? Help Ilya, solve the problem.


*/