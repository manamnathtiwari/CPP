// Stack
#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;cin>>q;
	stack<int> s;
	while(q--){
		string qs;int temp;cin>>qs;
		if(qs=="push"){
			cin>>temp;
			s.push(temp);
		}
		else if(qs=="pop"){
			s.pop();
		}
		else if(qs=="top"){
			cout<<s.top()<<endl;
		}
	}
}