// Count words
#include<bits/stdc++.h>
using namespace std;

bool check(char c){
	if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	string s;
	getline(cin,s);
	int count =0;
	bool flag = false;
	for(int i=0;i<s.size();++i){
		if(check(s[i])){
			if(!flag){
				count++;
				flag = true;
			}
		}
		else{
			flag=false;
		}
	}
	cout<<count<<endl;
}