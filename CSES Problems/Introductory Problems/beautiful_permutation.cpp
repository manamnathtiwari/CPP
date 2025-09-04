// CSES -Introductory Problem


// #include<bits/stdc++.h>
// using namespace std;
// 
// // A permutation of integers 1,2,...,n is called beautiful 
// // if there are no adjacent elements whose difference is 1.
// 
// bool checker(vector<int> &subset) {
    // int n=subset.size();
    // for(int i=1;i<n;++i) {
        // if(abs(subset[i]-subset[i-1])==1) {
            // return false;
        // }
    // }
    // return true;
// }
// 
// vector<vector<int>> subsets(vector<int> &nums) {
    // vector<vector<int>> subsets;
    // sort(nums.begin(), nums.end());
    // do {
        // if(checker(nums)) {
            // subsets.push_back(nums);
            // break;
        // }
    // } while(next_permutation(nums.begin(), nums.end()));
    // return subsets;
// }
// 
// int main() {
    // int n; cin >> n;
    // vector<int> nums;
    // for(int i=1;i<=n;++i){   
        // nums.push_back(i);
    // }
// 
    // vector<vector<int>> sub = subsets(nums);
// 
    // if(sub.empty()) {
        // cout << "NO SOLUTION" << endl;
    // } else {
        // for(auto subset:sub) {
            // for(int ele:subset) {
                // cout << ele << " ";
            // }
            // cout << "\n"; 
            // break;  
        // }
    // }
// }






// There is a smart way to solve this problem 
// place all odd numbers first and then all even numbers and you are done
// #include<bits/stdc++.h>
// using namespace std;
// 
// int main(){
	// int n;cin>>n;
	// if (n == 2 || n == 3) {
        // cout << "NO SOLUTION\n";
        // return 0;
    // }
	// for(int i=1;i<=n;++i){
		// if(i&1){
		// cout<<i<<" ";
		// }
	// }
	// for (int i = 1; i <= n; ++i) {
        // if ((i & 1) == 0) {  // even
            // cout << i << " ";
        // }
    // }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    // even numbers first
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    // then odd numbers
    for (int i = 1; i <= n; i += 2) cout << i << " ";
    cout << "\n";
}





















