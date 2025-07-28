// Sub sequence problem 
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string w="hello";
	int i = 0, j = 0;
    while (i < s.length() && j < w.length())
    {
        if (s[i] == w[j])
            ++j;
        ++i;
    }
    if(j==w.length()){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }
}