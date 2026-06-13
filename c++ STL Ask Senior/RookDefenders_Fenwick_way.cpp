//Rook Defenders Fenwick type solution

#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
const i64 INF = 1e18;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

struct Fenwick{
	int n;
	vector<int> bit;
	
	Fenwick(int sz){
		n=sz;
		bit.assign(n+1,0);
	}
	
	void update(int idx, int val){
		while(idx<=n){
			bit[idx] += val;
			idx += (idx&-idx);
		}
	}

int query(int idx){
	int sum = 0;
	while(idx >0){
		sum += bit[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

int rangeQuery(int l,int r){
	return query(r) - query(l-1);
}

};
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //Code Starts Here 
    
    i64 n,q;cin>>n>>q;
    
    Fenwick row(n),col(n);
    
    vector<int> rowCnt(n+1,0);
    vector<int> colCnt(n+1,0);
    
    while(q--){
    	int t;cin>>t;
    	
    	if(t==1){
    		int x,y;cin>>x>>y;
    		
    		rowCnt[x]++;
    		if(rowCnt[x]==1){
    			row.update(x,1);
    			}
    			
    		colCnt[y]++;
    		if(colCnt[y]==1){
    			col.update(y,1);
    			}
    	}
    			
    	
    	else if (t==2){
    		int x,y;cin>>x>>y;
    		
    		rowCnt[x]--;
    		if(rowCnt[x]==0){
    			row.update(x,-1);
    		}
    		
    		colCnt[y]--;
    		if(colCnt[y]==0){
    			col.update(y,-1);
    		}
    		
    	}
    	else{
    		int x1,y1,x2,y2;
    		cin>>x1>>y1>>x2>>y2;
    		bool ok1 = (row.rangeQuery(x1,x2)==(x2-x1+1));
    		bool ok2 = (col.rangeQuery(y1,y2)==(y2-y1+1));
    		
    		if(ok1||ok2){
    			cout<<"Yes\n";
    		}
    		else{
    			cout<<"No\n";
    		}
    		
    	}
    }
    
    
    
    
    
    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*



*/