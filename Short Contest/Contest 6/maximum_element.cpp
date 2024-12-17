#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//
void solve()
{
    int n;
    cin >> n;

    stack<ll> st1;

    while (n--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            ll val;
            cin >> val;
            st1.push(val);
        }

        else if (op == 2)
        {
            if (!st1.empty())
            {
                st1.pop();
            }
        }
        else if (op == 3)
        {
            stack<ll> st2;
            ll mx = INT_MIN;
            while (!st1.empty())
            {
                ll v = st1.top();
                if (v > mx)
                {
                    mx = v;
                }
                st2.push(v);
                st1.pop();
            }

            st1 = st2;

            cout << mx << nl;
        }
    }
}

void solve2()
{
    stack<int> st1;
    st1.push(2);
    st1.push(27);
    st1.push(29);
    st1.push(25);

    stack<int> st2;
    st2 = st1;

    while (!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solve2();
    solve();

    return 0;
}