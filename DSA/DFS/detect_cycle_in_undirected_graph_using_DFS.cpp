// Detect a cycle in a graph
// Undirected Graph

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<vector<int>> g;
vector<bool> vis;

bool dfs(int u,int parent){
	vis[u]=true;
	
	for(int v:g[u]){
		if(!vis[v]){
			if (dfs(v,u)) return true;//cycle in subtree
		}
		else if(v!=parent){
			return true;
		}
	}
	return false;
}

int main(){
	int n,m;cin>>n>>m;
	g.assign(n,{});
	vis.assign(n,false);
	
	for (int i=0;i<m;++i){
		int u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	bool hasCycle = false;
	for(int i=0;i<n;++i){
		if(!vis[i]){
			if(dfs(i,-1)){
				hasCycle=true;
				break;
			}
		}
	}
	
	cout<<(hasCycle?"Cycle Found":"NO Cycle")<<"\n";
}