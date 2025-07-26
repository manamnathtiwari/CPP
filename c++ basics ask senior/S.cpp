// Search om a MAtrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        vector<int> row; // Make sure you dont do this row(n)
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            row.push_back(x);
        }
        arr.push_back(row);
    }

    int target;
    cin >> target;
    int flag = 0;

    for (auto row : arr)
    {
        for (auto colum : row)
        {
            if (colum == target)
            {
                flag = 1;
                break; // Exit inner loop
            }
        }
        if (flag == 1)
            break; // Exit outer loop
    }

    if (flag == 0)
    {
        cout << "will take number";
    }
    else
    {
        cout << "will not take number";
    }

    return 0;
}
