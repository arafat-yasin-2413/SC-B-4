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
        int a,b,c;
        cin>>a>>b>>c;

        if( (a+b == c) or (a+c == b) or (b+c == a) )
        {
            cout<<"YES"<<nl;
        }
        else 
        {
            cout<<"NO"<<nl;
        }
    }

    return 0;
}