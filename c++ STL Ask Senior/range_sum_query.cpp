#include <bits/stdc++.h>
using namespace std;

typedef long long ll; // For large values

// Difference array concept
int main() {
    ll n, q;
    cin >> n >> q; // Read n first

    vector<ll> a(n + 1); 
    vector<ll> prefix(n+1,0);

    // Input array
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
        if(i==1){
        	prefix[i]=a[i];
        }
        else{
        prefix[i] = prefix[i-1] + a[i];
        }
    }

    // Process q queries
    while (q--) {
        ll L, R ;
        cin >> L >> R;
        cout<<prefix[R]-prefix[L-1]<<endl;
    }

}
