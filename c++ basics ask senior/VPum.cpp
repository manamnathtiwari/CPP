#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int temp= 1;
	for(int i=0;i<n;++i){
		for(int j = 0;j<3;++j){
			cout<<temp<<" ";
			temp++;
			if(temp%4==0){
				cout<<"PUM"<<endl;
				temp++;
			}
		}
	}
}