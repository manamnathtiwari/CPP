//Subsequence 

#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
const i64 INF = 1e18;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// Extras Added
vector<i64> a;
vector<i64> current;
i64 n;
// Extras Added Completed
void Generate(i64 index){
	
	//Base Case
	if (index == n){
		cout<<"{";
		for(auto x : current)
			cout<<x<<" ";
		cout<<"}\n";
		return;
		}
	//Skip
	Generate(index+1);
		
	//Take
	current.push_back(a[index]);
	
	Generate(index+1);
		
	current.pop_back();
}
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //Code Starts Here 
    
    cin>>n;
    for(i64 i=0;i<n;++i){
    	i64 temp;
    	cin>>temp;
    	a.push_back(temp);
    }
    
    Generate(0);
    return 0;
    
    
    
    
    
    
    
    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}

/*



*/