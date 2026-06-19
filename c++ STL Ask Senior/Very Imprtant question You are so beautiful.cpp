// You are so beautiful!

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
    int t; cin >> t;
    while(t--) {
        i64 n; cin >> n;
        vector<i64> a;
        for(i64 i = 0; i < n; ++i) {
            i64 temp; cin >> temp;
            a.push_back(temp);
        }
        
        // Step 1: Mark the first and last occurrences of each element
        // A subarray a[l...r] can only be uniquely matched as a subsequence if:
        // 1. l is the FIRST occurrence of the element a[l] in the whole array.
        // 2. r is the LAST occurrence of the element a[r] in the whole array.
        
        vector<bool> is_first(n, false);
        vector<bool> is_last(n, false);
        map<i64, i64> last_seen;
        
        // Find first occurrences (scanning left to right)
        for(i64 i = 0; i < n; ++i) {
            if(last_seen.find(a[i]) == last_seen.end()) {
                is_first[i] = true;
            }
            last_seen[a[i]] = i;
        }
        
        last_seen.clear();
        // Find last occurrences (scanning right to left)
        for(i64 i = n - 1; i >= 0; --i) {
            if(last_seen.find(a[i]) == last_seen.end()) {
                is_last[i] = true;
            }
            last_seen[a[i]] = i;
        }
        
        // Step 2: Count valid pairs (l, r) efficiently
        // We need to count pairs where is_first[l] == true and is_last[r] == true, with l <= r.
        // Instead of a nested loop O(n^2), we pre-calculate the suffix sum of valid right boundaries.
        
        vector<i64> valid_r_suffix(n + 1, 0);
        for(i64 i = n - 1; i >= 0; --i) {
            valid_r_suffix[i] = valid_r_suffix[i + 1] + (is_last[i] ? 1 : 0);
        }
        
        i64 ans = 0;
        for(i64 l = 0; l < n; ++l) {
            if(is_first[l]) {
                // Any valid 'r' from index 'l' to 'n-1' will form a valid unique subsequence subarray
                ans += valid_r_suffix[l];
            }
        }
        
        cout << ans << "\n";
    }
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*

To solve this problem the brute force way
Find all the subarrays 
Find all the subsequence and check if it matches the subarrays if the count goes more than 2 rejected if count =1 accepted

Im facing problems in understanding subarrays and then subsequence how do i think on
my own !

-----------------------------------------------------------------------------
How to build the intuition on your own:
1. Don't focus on "generating" subsequences. Focus on "what breaks uniqueness?".
2. If a subarray starts at 'l', and there is an identical element BEFORE 'l' (at index < l), 
   you could have chosen that earlier element instead to form the same sequence. 
   -> Thus, 'l' MUST be the absolute first occurrence of its value in the entire array.
3. Similarly, if a subarray ends at 'r', and there is an identical element AFTER 'r' (at index > r),
   you could have chosen that later element instead.
   -> Thus, 'r' MUST be the absolute last occurrence of its value in the entire array.

This completely transforms the complex "subsequence matching" problem into a simple 
counting problem: "How many pairs (l, r) exist such that l is a first-occurrence index, 
r is a last-occurrence index, and l <= r?"

*/