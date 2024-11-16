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
        string s;
        cin>>s;

        int sz = s.size();

        int leftSum = 0;
        for(int i=0; i<=2; i++)
        {   
            leftSum += s[i]-'0';
        }

        int rightSum = 0;
        for(int i=3; i<sz; i++)
        {   
            rightSum += s[i]-'0';
        }

        if(leftSum == rightSum)
            cout<<"YES"<<nl;
        else 
            cout<<"NO"<<nl;
    }

    return 0;
}