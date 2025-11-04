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
    int n,k;cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;++i){
    	int temp;cin>>temp;
    	arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    // sorting is done 
    i64 ans = 0;
    if(k==0){
    	ans = arr[0]-1;
    }  
    else{
    	ans = arr[k-1];
    }
    i64 cnt =0;
    for(int i=0;i<n;++i){
    	if(arr[i]<=ans){
    		cnt++;
    	}
    }
    
    if(cnt!=k || ans<1 ||ans>(i64)1e9){
    	cout<<-1<<endl;
    }
    else{
    	cout<<ans<<endl;
    }
    
    
    
    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}


/*
You are given a sequence of integers of length n
 and integer number k
. You should print any integer number x
 in the range of [1;109]
 (i.e. 1≤x≤109
) such that exactly k
 elements of given sequence are less than or equal to x
.

Note that the sequence can contain equal elements.

If there is no such x
, print "-1" (without quotes).

*/