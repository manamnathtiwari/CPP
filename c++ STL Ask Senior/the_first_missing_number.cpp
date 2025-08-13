#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	unordered_map<int, bool> arr;

	// Read the array of size n
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp <= m && temp >= -m) {
			arr[temp] = true;
		}
	}

	// Check from -m to m which number is missing
	for (int i = -m; i <= m; i++) {
		if (!arr[i]) {
			cout << i << endl;
			break;
		}
	}
}
