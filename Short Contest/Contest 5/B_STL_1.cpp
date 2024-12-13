#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

void print_set(set<int> &s)
{
    cout << "current : ";
    for (auto el : s)
    {
        cout << el << " ";
    }
    cout << endl;
}

void solve()
{

    int q;
    cin >> q;
    set<int> s;

    while (q--)
    {

        int op, val;
        cin >> op >> val;

        if (op == 1)
        {
            s.insert(val);
            // print_set(s);
        }
        else if (op == 2)
        {
            s.erase(val);
            // print_set(s);
        }
        else if (op == 3)
        {
            if (s.find(val) != s.end())
            {
                cout << "Yes" << nl;
            }
            else
            {
                cout << "No" << nl;
            }
            // print_set(s);
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