// deque
#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	deque<int> dq;
	while(q--){
		string s;cin>>s;
		int n;
		if(s=="push_back"){
			cin>>n;
			dq.push_back(n);
		}
		else if(s=="push_front"){
			cin>>n;
			dq.push_front(n);
		}
		else if(s=="pop_front"){
			dq.pop_front();
		}
		else if(s=="pop_back"){
			dq.pop_back();
		}
		else if(s=="front"){
			cout<<dq.front()<<endl;
		}
		else if(s=="back"){
			cout<<dq.back()<<endl;
		}
		else if(s=="print"){
			cin>>n;
			cout<<dq[--n]<<endl;
		}
	}
}