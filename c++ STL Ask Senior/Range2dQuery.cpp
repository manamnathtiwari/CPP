#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,q;
	cin>>n>>m>>q;
	vector<vector<long long>> mat(n+1,vector<long long>(m+1,0));
	vector<vector<long long>> pref(n+1,vector<long long>(m+1,0));
	//Input Matrix
	for(int i=1;i<=n;++i){
		for(int j=1;j<=	m;++j){
			cin>>mat[i][j];
		}
	}
	
	//Prefix Sum 
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			pref[i][j]=mat[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
		}
	}
	while(q--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		long long ans = pref[x2][y2]- pref[x1 - 1][y2]- pref[x2][y1 - 1]+ pref[x1 - 1][y1 - 1];
        cout<<ans<<endl;
	}
// 	suppose 1,2 and 2,2
// pref[2][2]-pref[0][2]-pref[2][1]+pref[0][0]
// pref[x2][y2]+pref[x1-1][y1-1] -(pref[x1-1][y2]+pref[x2][y1-1])
}