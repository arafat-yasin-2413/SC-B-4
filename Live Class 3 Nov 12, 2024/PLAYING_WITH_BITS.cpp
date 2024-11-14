/*
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
// https://www.spoj.com/problems/BITPLAY/

ll decimal_to_binary(ll x)
{
    ll sum_of_digits = 0;
    while (x != 0)
    {
        ll digit = x % 2;
        x = x / 2;
        // cout<<digit<<endl;
        sum_of_digits += digit;
    }
    return sum_of_digits;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        int k;
        cin >> n >> k;

        if (k == 0)
        {
            cout << -1 << nl;
            continue;
        }

        n--;
        while (n >= 1)
        {
            if (decimal_to_binary(n) <= k)
            {
                cout << n << nl;
                break;
            }

            n -= 2;
        }

        if (n < 1)
        {
            cout << -1 << nl;
        }
    }
    return 0;
}


*/

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
//

ll power_calculate(ll p)
{
    ll total = 1;
    for (int i = 1; i <= p; i++)
    {
        total = 2 * total;
        // cout<<total<<endl;
    }

    return total;
}

// i = 1,
// total = 1,
// 2*1 = 2
// i = 2,
// total =

// 2,1 - 2
// 2,2 - 4
// 2,3 - 8
// 2,4 - 16
// 2,5 - 32

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        // cout<<power_calculate(4)<<nl;
        if (k < 1)
            cout << -1 << nl;

        else
        {
            k--;
            ll ans = 1;
            for (int i = 30; i >= 1 && k > 0; i--)
            {
                ll v = power_calculate(i);
                if (v + ans < n)
                {
                    ans += v;
                    k--;
                }
            }

            cout << ans << nl;
        }
    }
    return 0;
}