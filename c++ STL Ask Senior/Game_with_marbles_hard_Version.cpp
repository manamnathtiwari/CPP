// Game of Marbles <Hard>

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
    i64 t;cin>>t;
    while(t--){
    	i64 n;cin>>n;
    	vector<i64> a;
    	vector<i64> b;
    	//This is the way if i want to preserve the order i have to maintain a pair
    	vector<pair<i64, i64>> order;
    	
    	for(i64 i =0;i<n;++i){
    		i64 temp;cin>>temp;
    		a.push_back(temp);
    	}
    	
    	for(i64 i =0;i<n;++i){
    		i64 temp;cin>>temp;
    		b.push_back(temp);
    	}
    	
    	for (i64 i = 0; i < n; i++) {
    		order.push_back({a[i] + b[i], i});
    	}
    	
    	//Sort it in descending order 
    	//begin , end pointer and then comparator 
    	sort(order.begin(), order.end(), greater<pair<i64, i64>>());
    	//This is the order one will be picking each
    	
    	//For turn lets keep a variable 
    	int turn = 0;
    	for(i64 i = 0;i<n;++i){
    		i64 index = order[i].second;
    		
    		if(turn ==0){
    			a[index]--;
    			b[index] = 0;
    			turn = 1;
    			
    		}
    		else if(turn == 1){
    			b[index]--;
    			a[index] = 0;
    			turn =0;
    		}	
    	}
    	
    	i64 suma = std::accumulate(a.begin(), a.end(), 0LL);
		i64 sumb = std::accumulate(b.begin(), b.end(), 0LL);
    	
    	cout<<suma-sumb<<"\n";
    }
    
    
    

    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*
 To Keep in mind 
 
 - Vector<pair<int,int>>


*/