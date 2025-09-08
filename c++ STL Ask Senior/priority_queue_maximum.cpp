// Priority Queue maximum
#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;cin>>q;
	priority_queue<int> pq;
	while(q--){
		string s;cin>>s;
		if(s=="push"){
			int temp;cin>>temp;
			pq.push(temp);
		}
		else if(s=="top"){
			cout<<pq.top()<<endl;
		}
		else if (s=="pop"){
			pq.pop();
		}
	}
}