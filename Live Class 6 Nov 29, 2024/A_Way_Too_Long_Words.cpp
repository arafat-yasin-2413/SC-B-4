#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://codeforces.com/problemset/problem/71/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int len = s.size();
        if (len <= 10)
        {
            cout << s << nl;
        }
        else
        {
            cout << s[0] << len - 2 << s[len - 1] << nl;
        }
    }

    return 0;
}