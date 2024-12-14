#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define mod 1000000009

//
void solve()
{
    int sz = 100007;
    vector<int> vec[sz];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec[x].push_back(i);
    }
    vector<pair<int, int>> res;
    for (int i = 0; i < sz; i++)
    {
        if (vec[i].size() == 0)
        {
            continue;
        }
        else if (vec[i].size() == 1)
        {
            res.push_back({i, 0});
        }
        else
        {
            int t = vec[i][1] - vec[i][0];
            bool flag = true;
            for (int j = 1; j < vec[i].size(); j++)
            {
                if (vec[i][j] - vec[i][j - 1] != t)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                res.push_back({i, t});
            }
        }
    }
    cout << res.size() << nl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].first << " " << res[i].second << nl;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}