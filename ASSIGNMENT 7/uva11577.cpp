#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//
void solve()
{
    int t;
    cin >> t;

    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        vector<int> cnt(26,0);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                cnt[s[i] - 'a']++;
            if (s[i] >= 'A' && s[i] <= 'Z')
                cnt[s[i] - 'A']++;
        }
        int mx = 0;

        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > mx)
            {
                mx = cnt[i];
            }
        }
        for (int i = 0; i < 26; i++)
            if (cnt[i] == mx)
            {
                cout << char(i + 'a');
            }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}