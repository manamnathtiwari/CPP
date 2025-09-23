// Next Element (Monotonic Stack Approach)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    // nextGreater[i] will store the index (1-based) of the next greater element for arr[i]
    // If none exists, store -1
    vector<int> nextGreater(n, -1);
    stack<int> st; // will hold indices

    // Process from right to left
    for (int i = n - 1; i >= 0; --i) {
        // Pop all elements smaller or equal to arr[i]
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }

        // If stack is not empty, the top is the next greater index
        if (!st.empty()) {
            nextGreater[i] = st.top() + 1; // convert to 1-based index
        } else {
            nextGreater[i] = -1;
        }

        // Push this index into stack
        st.push(i);
    }

    int q;
    cin >> q;
    while (q--) {
        int i;
        cin >> i;
        --i; // convert to 0-based
        cout << nextGreater[i] << "\n";
    }
    return 0;
}
