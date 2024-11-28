#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.spoj.com/problems/HCOUPLE/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int j = 1; j <= t; j++)
    {
        string s;
        cin >> s;
        int sum = 0;
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            int x = s[i];
            // cout<<x<<endl;
            sum += x;
        }

        if (sum % 3 == 0)
            cout << "Case " << j << ": Yes" << endl;
        else
            cout << "Case " << j << ": No" << endl;
    }
    return 0;
}