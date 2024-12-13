#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//
void solve()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 1; i <= n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        mp[s2] = s1;
    }

    for (int i = 1; i <= m; i++)
    {
        string s3, s4;
        cin >> s3 >> s4;

        string cpy = s4;
        cpy.pop_back();

        cout << s3 << " " << s4 << " " << "#" << mp[cpy] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}