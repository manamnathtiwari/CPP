// Counting Sort Problem to solve a sorting array problem 
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5+10;
int main(){
	int n;cin>>n;
	vector<int> freq(MAX,0);
	
	for(int i=0;i<n;++i){
		int x;cin>>x;
		freq[x]++;
	}
	
	for(int i=0;i<MAX;++i){
		while(freq[i]--){
			cout<<i<<" ";
		}
		
	}
	cout<<endl;
}
// O(n+k) where k= 1e5+10 almost O(n)
// 