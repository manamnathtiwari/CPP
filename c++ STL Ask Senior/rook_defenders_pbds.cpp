
// Rook Defenders (PBDS)

#include <bits/stdc++.h>
#include <cstdint>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

using i64 = long long;
const i64 INF = 1e18;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

template <class T>
using pbds = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Code Starts Here

    int n, q;
    cin >> n >> q;

    vector<int> row(n + 1, 0);
    vector<int> col(n + 1, 0);

    // Stores rows and columns having 0 rooks
    pbds<int> freeRow;
    pbds<int> freeCol;

    // Initially every row and column is free
    for (int i = 1; i <= n; i++) {
        freeRow.insert(i);
        freeCol.insert(i);
    }

    while (q--) {

        int t;
        cin >> t;

        if (t == 1) {

            int x, y;
            cin >> x >> y;

            row[x]++;

            if (row[x] == 1)
                freeRow.erase(x);

            col[y]++;

            if (col[y] == 1)
                freeCol.erase(y);
        }

        else if (t == 2) {

            int x, y;
            cin >> x >> y;

            row[x]--;

            if (row[x] == 0)
                freeRow.insert(x);

            col[y]--;

            if (col[y] == 0)
                freeCol.insert(y);
        }

        else {

            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            // Number of empty rows in [x1, x2]
            int emptyRows =
                freeRow.order_of_key(x2 + 1) -
                freeRow.order_of_key(x1);

            // Number of empty columns in [y1, y2]
            int emptyCols =
                freeCol.order_of_key(y2 + 1) -
                freeCol.order_of_key(y1);

            if (emptyRows == 0 || emptyCols == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    // Questions will be written completely in the last
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}

/*

row[i] = number of rooks in row i
col[i] = number of rooks in column i

freeRow = rows having 0 rooks
freeCol = columns having 0 rooks

------------------------------------------------

Initially:

freeRow = {1,2,...,n}
freeCol = {1,2,...,n}

------------------------------------------------

Type 1:

Insert a rook.

If row count changes from 0 -> 1,
erase that row from freeRow.

If column count changes from 0 -> 1,
erase that column from freeCol.

------------------------------------------------

Type 2:

Remove a rook.

If row count changes from 1 -> 0,
insert that row back into freeRow.

If column count changes from 1 -> 0,
insert that column back into freeCol.

------------------------------------------------

Type 3:

Count empty rows in [x1,x2]:

freeRow.order_of_key(x2 + 1)
- freeRow.order_of_key(x1)

If this count is 0,
then every row has at least one rook.

Similarly for columns.

If either:
    emptyRows == 0
or
    emptyCols == 0

answer is "Yes",
otherwise "No".

Time Complexity:
O(q log n)

*/
