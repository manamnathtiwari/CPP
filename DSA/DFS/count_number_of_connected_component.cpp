// Probelm Count number of connected components.

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;//Maximum number of nodes

vector<int> g[N];//Adjacenecy list 
bool vis[N];//visited array

void dfs(int u){
	//Take action on entering mode
	cout<<u<<" ";
	vis[u]=true;
	
	for(int v : g[u]){
		if(!vis[v]){
			// Take action on child before DFS call
			dfs(v);
			// Take action on child after DFS call
			
		}
	}
	//Take action on exiting mode 
	
}

int main(){
	int n,m;
	cin>>n>>m;//n=number of nodes ., m=number of edges
	
	for (int i=0;i<m;++i){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);//Remove this line if gaph is directed
	}
	
	//DFS for all components
	for(int i=1;i<=n;++i){
		if(!vis[i]){
			cout<<"Component: ";
			dfs(i);
			cout<<"\n";
		}
	}
}