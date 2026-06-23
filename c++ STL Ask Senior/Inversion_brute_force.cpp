// Inversion 

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
    int t;cin>>t;
    vector<i64> arr;
    for(int i=0;i<t;++i){
    	int temp;cin>>temp;
    	arr.push_back(temp);
    }
    i64 inversion = 0;
    for(int i=0;i<arr.size();++i){
    	for(int j=i+1;j<arr.size();++j){
    		if(arr[i]>arr[j]){
    			++inversion;
    		}
    	}
    }
    cout<<"Inversion = "<<inversion<<endl;
    
    
    
    
    
    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*



*/