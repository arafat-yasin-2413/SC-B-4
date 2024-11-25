#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/327/problem/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];
    int number_of_one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        number_of_one += ar[i];

        if (ar[i] == 1)
        {
            ar[i] = -1;
        }
        else
        {
            ar[i] = 1;
        }
    }

    // for (auto el : ar)
    // {
    //     cout << el << " ";
    // }
    // cout << nl;

    if (number_of_one == n)
    {
        cout << n - 1 << nl;
        return 0;
    }

    int result = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx + ar[i], 0);
        result = max(mx, result);
    }

    cout << result + number_of_one << nl;

    return 0;
}