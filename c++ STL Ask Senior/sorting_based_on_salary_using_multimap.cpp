// Sorting pairs by salary in descending order
#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string, greater<int>> ma; // key = salary, value = name
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string name;
        int sal;
        cin >> name >> sal;
        ma.insert({sal, name});
    }

    for (auto it = ma.begin(); it != ma.end(); ++it) {
        cout << it->second << " " << it->first << endl;
    }
    return 0;
}
