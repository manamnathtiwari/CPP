// 8 Neighbors
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            char c;
            cin >> c;
            if (c == 'x' || 'X')
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--;

    // Direction of 8 neighbours
    int dx[] = {-1, -1, -1, 0, 0, +1, +1, +1};
    int dy[] = {-1, 0, +1, -1, +1, -1, 0, +1};

    bool all_neighbours = true;

    for (int k = 0; k < 8; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if (a[nx][ny] != 1)
            {
                all_neighbours = false;
                break;
            }
        }
    }

    cout << (all_neighbours ? "yes" : "no") << endl;
}
