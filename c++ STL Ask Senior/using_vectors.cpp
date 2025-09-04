#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);

    // Input array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    while (q--) {
        string s;
        cin >> s;

        if (s == "pop_back") {
            if (!arr.empty()) arr.pop_back();
        }
        else if (s == "front") {
            if (!arr.empty()) cout << arr.front() << "\n";
        }
        else if (s == "back") {
            if (!arr.empty()) cout << arr.back() << "\n";
        }
        else if (s == "sort") {
            int l, r;
            cin >> l >> r;
            // 1-based indexing, so adjust
            sort(arr.begin() + (l - 1), arr.begin() + r);
        }
        else if (s == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(arr.begin() + (l - 1), arr.begin() + r);
        }
        else if (s == "print") {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= (int)arr.size())
                cout << arr[pos - 1] << "\n";
        }
        else if (s == "push_back") {
            long long ele;
            cin >> ele;
            arr.push_back(ele);
        }
        
    }
    return 0;
}


/*
arr.pop_back() -> removes the last or top element 
arr.front() --> gives the first element
arr.back() --> gives the last element 
(int)arr.size() --> Gives the size of the vector and yes you need to type cast
arr.empty() --> return boolean for arr if empty
arr.push_back(ele) --> adds element in the end 

// 1-based indexing, so adjust
sort(arr.begin() + (l - 1), arr.begin() + r);

reverse(arr.begin() + (l - 1), arr.begin() + r);







*/