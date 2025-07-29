#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int number = n;
	int rev = 0;
	while(n>0){
		rev = rev*10 +n%10;
		n/=10;
		
	}
	cout<<rev<<endl;
	if(number == rev){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}