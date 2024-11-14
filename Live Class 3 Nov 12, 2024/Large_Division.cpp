#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://lightoj.com/problem/large-division

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int j = 1; j <= t; j++)
    {

        string a;
        ll b;

        cin >> a;
        cin >> b;

        // cout<<a<<endl;
        // cout<<b<<endl;

        // cout<<a[a.size()-1]<<endl;

        if (b < 0)
            b *= (-1);
        int starting_pos = 0;
        if (a[0] == '-')
            starting_pos = 1;

        ll num = 0;
        int sz = a.size();
        bool isDivisible = false;
        for (int i = starting_pos; i < sz; i++)
        {
            num = a[i] - '0' + num;
            ll remainder = num % b;
            num = remainder * 10;

            if (i == sz - 1 && remainder == 0)
            {
                isDivisible = true;
            }
        }

        if (isDivisible)
            cout << "Case " << j << ": divisible" << nl;
        else
            cout << "Case " << j << ": not divisible" << nl;
    }

    return 0;
}
