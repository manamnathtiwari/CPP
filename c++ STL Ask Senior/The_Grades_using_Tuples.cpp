#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // tuple: (name, arab, maths, sci, eng, total)
    // whenever i have this mixing of data types i have to use tuple 
    vector<tuple<string,int,int,int,int,int>> arr;

    for (int i = 0; i < n; ++i) {
        string name;
        int arab, maths, sci, eng;
        cin >> name >> arab >> maths >> sci >> eng;
        int total = arab + maths + sci + eng;
        //to insert tuple in the vector use make_tuple(value1 value2 ,) and then push back in the vector 
        arr.push_back(make_tuple(name, arab, maths, sci, eng, total));
    }

    // Custom sort 
    //Designing custom sort(arr.begin(),arr,end(),[](auto&a,auto &b))
    sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
        if (get<5>(a) != get<5>(b)) //get<5> fetches toal from the tuple
            return get<5>(a) > get<5>(b); // total descending
        return get<0>(a) < get<0>(b);     // name ascending
    });

    // Print result
    for (auto &t : arr) {
        cout << get<0>(t)<<" "
        	 << get<5>(t) << " "
             << get<1>(t) << " "
             << get<2>(t) << " "
             << get<3>(t) << " "
             << get<4>(t) << "\n";
    }
}
