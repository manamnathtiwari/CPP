#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        bool beautiful = false;
        for (int i = 0; i < n - 1; ++i)
        {
            if (abs(a[i] - a[i + 1]) <= 1)
            {
                beautiful = true;
                break;
            }
        }

        if (beautiful)
            cout << 0 << endl;
        else if (n == 2)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
