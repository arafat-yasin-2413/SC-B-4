#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,x;
        cin>>a>>b>>c>>x;

        if(a+b >= x)
            cout<<"YES"<<nl;
        else if(a+c >= x)
            cout<<"YES"<<nl;
        else if(b+c >= x)
            cout<<"YES"<<nl;
        else 
            cout<<"NO"<<nl;
    }

    return 0;
}