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

        if(a+b == c)
        {
            cout<<"+"<<nl;
        }
        else if(a-b == c)
        {
            cout<<"-"<<nl;
        }

    }

    return 0;
}