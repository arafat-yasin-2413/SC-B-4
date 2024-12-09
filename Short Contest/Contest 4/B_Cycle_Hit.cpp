#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    bool flag4 = false;

    string st1 = "H";
    string st2 = "2B";
    string st3 = "3B";
    string st4 = "HR";

    if (st1 == s1 or st1 == s2 or st1 == s3 or st1 == s4)
    {
        flag1 = true;
    }

    if (st2 == s1 or st2 == s2 or st2 == s3 or st2 == s4)
    {
        flag2 = true;
    }

    if (st3 == s1 or st3 == s2 or st3 == s3 or st3 == s4)
    {
        flag3 = true;
    }

    if (st4 == s1 or st4 == s2 or st4 == s3 or st4 == s4)
    {
        flag4 = true;
    }

    if (flag1 == true and flag2 == true and flag3 == true and flag4 == true)
    {
        cout << "Yes" << nl;
    }
    else
    {
        cout << "No" << nl;
    }

    return 0;
}