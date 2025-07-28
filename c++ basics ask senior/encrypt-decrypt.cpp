// Encrypt and Decrypt Message
// Given a number Q and a string S.
// If Q == 1 => encrypt and print
// If Q != 1 => decrypt and print

#include<bits/stdc++.h>
using namespace std;

const string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
const string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

string encrypt(string s){
	string ne = "";
	for(long long i = 0; i < s.size(); ++i){
		for(long long j = 0; j < Original.size(); ++j){
			if(s[i] == Original[j]){
				ne.push_back(Key[j]); // fix: use Key[j]
				break;
			}
		}
	}
	return ne;
}

string decrypt(string s){
	string ne = "";
	for(long long i = 0; i < s.size(); ++i){
		for(long long j = 0; j < Key.size(); ++j){
			if(s[i] == Key[j]){
				ne.push_back(Original[j]); // fix: use Original[j]
				break;
			}
		}
	}
	return ne;
}

int main(){
	int q;
	string s;
	cin >> q >> s;
	if(q == 1){
		cout << encrypt(s) << endl;
	}
	else{
		cout << decrypt(s) << endl;
	}
}
