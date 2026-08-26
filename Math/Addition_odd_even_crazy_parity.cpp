// Addition Parity 

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
    int odd =0;
    for(int i=1;i<=n;++i){
    	int temp;cin>>temp;
    	if(temp&1==1){
    		++odd;
    	}
    }
    if(odd&1==1){
    	cout<<"NO";
    }
    else{
    	cout<<"YES";
    }
    
    
    
    
    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*
 E + E -> E-1
 O + O -> E | O-->O-2 | E--> E+1
 


*/