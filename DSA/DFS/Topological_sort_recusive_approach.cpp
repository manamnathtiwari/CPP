// Topological Sort 
// Recursive DFS version

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> vis;
stack<int> st;

void dfs(int u){
	vis[u]=true;
	for(int v:g[u]){
		if(!vis[v]) dfs(v);
	}
	st.push(u);//push after visiting all children
}

int main(){
	int n,m;cin>>n>>m;
	g.assign(n,{});
	vis.assign(n,false);//assign is like filling empty
	
	for(int i=0;i<m;++i){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);//directed edgeu->v
	}
	
	for(int i=0;i<n;++i){
		if(!vis[i])dfs(i);
	}
	
	cout<<"Topological order : ";
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<"\n";
}

// Time Complexity --> O(N+M)
//  Causes Time Limit Exceeded Error (TLE) 
// Does some hell lot of thing to the memory 