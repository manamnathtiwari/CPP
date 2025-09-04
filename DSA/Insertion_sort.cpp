// Insertion sort ;
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	multiset<int> arr;
	for(int i=0;i<n;++i ){
		int temp;
		cin>>temp;
		arr.insert(temp);
	}
	
	for(int i:arr ){
		cout<<i<<" ";
	}
	
}

// Time Complexity
// O(nlogn)