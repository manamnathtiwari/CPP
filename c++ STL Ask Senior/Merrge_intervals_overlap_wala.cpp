// Merge Intervals
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<pair<int,int>> intervals(n);
	
	//Read the inputs 
	for(int i=0;i<n;++i){
		cin>>intervals[i].first>>intervals[i].second;
	}
	//O(n)
	
	//Automatically the vector is sorted
	sort(intervals.begin(),intervals.end());
	//O(nlogn)
	
	//make a result vector
	vector<pair<int,int>> result;
	
	//initialize the points
	int currentL = intervals[0].first;
	int currentR = intervals[0].second;
	
	//Iterate through other points
	for(int i=1;i<n;++i){
		int l= intervals[i].first;
		int r=intervals[i].second;
		
		if(l<=currentR){
			currentR= max(currentR,r);//Agar left pichla right se kam ho then pichla aur cuurent right ke max to currentR kardo
			
		}
		else{
			result.push_back({currentL,currentR});
			
			//After inserting we have to set new intervals
			 currentL=l;
			 currentR=r;
		}
	}
	//O(N)
	
	//Adding the last interval
	result.push_back({currentL,currentR});
	
	//Ab print karna hai
	for(auto &p :result){
		cout<<p.first<<" "<<p.second<<endl;
	}
	
	
}