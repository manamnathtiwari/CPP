// Diverse Team
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> num(n);
	map<int,int> nums;
	for(int i=0;i<n;++i){
		cin>>num[i];
		if(nums.find(num[i]) == nums.end()){
			nums[num[i]] = i+1;
		}
	}
	if((int)nums.size()>=k){
		cout<<"YES"<<endl;
		int count =0;
		for(auto i=nums.begin();i!=nums.end();++i){
			cout<<i->second<<" ";
			count++;
			if(count==k) break;
		}
	}
	else {cout<<"NO"<<endl;}
}