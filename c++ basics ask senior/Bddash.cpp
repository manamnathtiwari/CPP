// GetLine
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '\\')
        {
            i += s.length();
            break;
        }
        cout << s[i];
        ++i;
    }
}