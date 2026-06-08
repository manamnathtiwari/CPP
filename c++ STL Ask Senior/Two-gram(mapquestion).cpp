// Two-gram

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
    int n;cin>>n;
    string s;cin>>s;
    
    map<string,i64> m;
    string s1;
    for(i64 i = 1;i<n;++i){
    	s1 = "";
    	s1+=s[i-1];
    	s1+=s[i];
    	// cout<<s1<<"\n";
    	m[s1]++;
    }
    i64 maxi = 0;
    string ans;
    for(auto x:m){
    	if (x.second>maxi){
    		maxi=x.second;
    		ans = x.first;
    	}
    }
    
    
    cout<<ans;
    
    
    
    
    
    
    
    
    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*



*/