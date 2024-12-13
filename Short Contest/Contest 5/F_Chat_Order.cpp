#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//
void solve()
{
    int n;
    cin >> n;

    stack<string> st;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        st.push(s);
    }

    map<string, int> mp;

    while (!st.empty())
    {
        string a = st.top();
        st.pop();
        if (mp[a] == 0)
        {
            cout << a << endl;
        }
        mp[a]++;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}