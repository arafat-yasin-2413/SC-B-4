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