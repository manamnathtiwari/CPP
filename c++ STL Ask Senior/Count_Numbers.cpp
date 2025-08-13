// COUNT NUMBERS
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , q;cin>>n>>q;
	
	vector<int> arr(n+1,0);
	
	while(q--){
		int a , b;
		cin>>a>>b;
		if(a==1){
			arr[b]++;
		}
		else if (a==2){
			cout<<arr[b]<<endl;
		}
	}	
}