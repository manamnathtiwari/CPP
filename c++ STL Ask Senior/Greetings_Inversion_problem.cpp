// Greetings

#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
const i64 INF = 1e18;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

i64 mergeSort(vector<i64>& arr,i64 left,i64 right){
	if(right-left<=1){
		return 0;
	}

	i64 mid=(left+right)/2;

	i64 inversions=0;

	inversions+=mergeSort(arr,left,mid);
	inversions+=mergeSort(arr,mid,right);

	vector<i64> temp;

	i64 i=left;
	i64 j=mid;

	while(i<mid && j<right){
		if(arr[i]<=arr[j]){
			temp.push_back(arr[i]);
			++i;
		}
		else{
			inversions+=(mid-i);
			temp.push_back(arr[j]);
			++j;
		}
	}

	while(i<mid){
		temp.push_back(arr[i]);
		++i;
	}

	while(j<right){
		temp.push_back(arr[j]);
		++j;
	}

	for(i64 k=left;k<right;++k){
		arr[k]=temp[k-left];
	}

	return inversions;
}

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Code Starts Here

    int t;cin>>t;

    while(t--){

    	i64 n;cin>>n;

    	vector<pair<i64,i64>> points;

    	for(i64 i=0;i<n;++i){
    		i64 start,end;
    		cin>>start>>end;

    		points.push_back({start,end});
    	}

    	sort(points.begin(),points.end());

    	vector<i64> ends;

    	for(auto point:points){
    		ends.push_back(point.second);
    	}

    	cout<<mergeSort(ends,0,n)<<"\n";
    }

    //Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}

/*

Pattern:

Movement
↓
Same Speed
↓
Relative Order Fixed
↓
Sort by Start
↓
Look at End Positions
↓
Count Inversions

*/