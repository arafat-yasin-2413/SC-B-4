#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//
void solve()
{
    string s;
    cin >> s;

    stack<char> st1;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st1.push(s[i]);
        }

        else if (s[i] == ')' or s[i] == '}' or s[i] == ']')
        {
            if (st1.empty())
            {
                cout << "No" << nl;
                return;
            }

            char ch = st1.top();
            st1.pop();

            if ((s[i] == ')' and ch != '(') or (s[i] == '}' and ch != '{') or (s[i] == ']' and ch != '['))
            {
                cout << "No" << nl;
                return;
            }
        }

        if (st1.empty())
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}