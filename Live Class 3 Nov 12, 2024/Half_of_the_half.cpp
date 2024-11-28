#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.spoj.com/problems/STRHH/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        // cout<<s<<endl;

        int sz = s.size();
        int limit = sz/2;

        for(int i=0; i<limit; i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}