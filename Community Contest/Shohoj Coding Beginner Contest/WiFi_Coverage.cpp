#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
// 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, L;
    cin>>n>>L;

    ll ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    double mn = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        double diff = 1.0 * (abs ( (ar[i]+1) -ar[i+1] ) );
        if(diff < mn)
        {
            mn = diff;
        }
    }

    cout<<fixed<<setprecision(10) << mn <<nl;
    

    return 0;
}