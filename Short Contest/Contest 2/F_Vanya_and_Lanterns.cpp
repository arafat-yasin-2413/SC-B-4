#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, l;
    cin >> n >> l;

    ll ar[n];
    for (ll i = 0; i < n; i++)
        cin >> ar[i];

    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (ar[i] >= ar[j])
            {
                ll temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    ll maxDifference = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if ((ar[i + 1] - ar[i]) > maxDifference)
        {
            maxDifference = (ar[i + 1] - ar[i]);
        }
    }

    double x = ar[0];
    double y = l - ar[n - 1];
    double z = maxDifference / 2.0;

    double result = max(x, z);
    result = max(y, result);

    cout << fixed << setprecision(10) << result << nl;

    

    return 0;
}