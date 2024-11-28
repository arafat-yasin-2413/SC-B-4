#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://judge.yosupo.jp/problem/static_range_sum

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    ll pref[n];
    pref[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }

    // cout << "pref sum array : " << nl;

    // for (int i = 0; i < n; i++)
    //     cout << pref[i] << " ";
    // cout << nl;

    for (int query = 1; query <= q; query++)
    {
        int li, ri;
        cin >> li >> ri;

        int l = li;
        int r = ri - 1;

        if (l == 0)
        {
            cout << pref[r] << nl;
        }

        else
        {
            cout << pref[r] - pref[l - 1] << nl;
        }
    }

    return 0;
}