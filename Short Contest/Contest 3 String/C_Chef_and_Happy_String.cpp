#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

void solve()
{
    string s;
    cin >> s;

    int sz = s.size();
    int cnt = 0;

    for (int i = 0; i < sz; i++)
    {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
        {
            cnt++;
            if (cnt > 2)
            {
                cout << "Happy" << nl;
                return;
            }
        }

        else
        {
            cnt = 0;
        }
    }

    // cout << "cnt = " << cnt << nl;
    cout << "Sad" << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}