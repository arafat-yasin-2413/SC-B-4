#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// 

ll get_factorial(ll n)
{
    ll res = 1;
    for(int i=1; i<=n; i++)
    {
        res *= i;
    }
    return res;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    ll facto = get_factorial(n);
    cout<<facto<<nl;

    return 0;
}