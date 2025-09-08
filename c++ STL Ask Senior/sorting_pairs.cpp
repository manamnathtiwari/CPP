#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    multimap<int, string, greater<int>> arr; // Use greater<int> to sort in descending order
    
    for(int i = 0; i < n; ++i){
        string name; int sal;
        cin >> name >> sal;
        arr.insert({sal, name});
    }
    
    for(auto &x : arr){
        cout << x.second << " " << x.first << endl;
    }
}