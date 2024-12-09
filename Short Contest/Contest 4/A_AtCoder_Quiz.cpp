#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    bool b_flag = false;
    bool g_flag = false;
    bool h_flag = false;
    bool r_flag = false;

    // s1
    if (s1[1] == 'B')
    {
        b_flag = true;
    }
    else if (s1[1] == 'G')
    {
        g_flag = true;
    }
    else if (s1[1] == 'H')
    {
        h_flag = true;
    }
    else if (s1[1] == 'R')
    {
        r_flag = true;
    }

    // s2
    if (s2[1] == 'B')
    {
        b_flag = true;
    }
    else if (s2[1] == 'G')
    {
        g_flag = true;
    }
    else if (s2[1] == 'H')
    {
        h_flag = true;
    }
    else if (s2[1] == 'R')
    {
        r_flag = true;
    }

    // s3
    if (s3[1] == 'B')
    {
        b_flag = true;
    }
    else if (s3[1] == 'G')
    {
        g_flag = true;
    }
    else if (s3[1] == 'H')
    {
        h_flag = true;
    }
    else if (s3[1] == 'R')
    {
        r_flag = true;
    }

    // final output
    if (b_flag == false)
    {
        cout << "ABC" << nl;
    }
    else if (g_flag == false)
    {
        cout << "AGC" << nl;
    }
    else if (h_flag == false)
    {
        cout << "AHC" << nl;
    }
    else if (r_flag == false)
    {
        cout << "ARC" << nl;
    }

    return 0;
}