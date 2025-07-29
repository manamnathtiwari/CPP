// URL
#include<bits/stdc++.h>
using namespace std;

void build(string str,string s){
	int pos = s.find(str);
	int pos1 = s.find('=',pos+1);
	int pos2 = s.find('&',pos1+1);
	
	cout<<s.substr(pos,pos1-pos)<<": "<<s.substr(pos1+1,pos2-pos1-1)<<endl;
}


int main(){
	string s;cin>>s;
	s+='&';
	build("username",s);
	build("pwd",s);	
	build("profile",s);	
	build("role",s);
	build("key",s);
	
}

