#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//
void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 2; j < n; j++)
            {
                if (ar[i] == ar[j])
                {
                    flag = true;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}