#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll ar[n];

    for (ll i = 0; i < n; i++)
        cin >> ar[i];

    ll pref[n];
    pref[0] = ar[0];

    for (ll i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }

    ll q;
    cin >> q;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        if (l == 0)
        {
            cout << pref[r] << nl;
        }
        else
        {
            cout << pref[r] - pref[l - 1] << nl;
        }
    }

    // for (ll i = 0; i < n; i++)
    // {
    //     cout << pref[i] << " ";
    // }
    // cout << endl;

    return 0;
}