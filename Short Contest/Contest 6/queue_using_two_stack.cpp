#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<int> st1, st2;

    for(int i=0; i<n; i++)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int val;
            cin >> val;
            st1.push(val);
        }

        else if (op == 2)
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            if (!st2.empty())
            {
                st2.pop();
            }
            while (!st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }

        else if (op == 3)
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            if (!st2.empty())
            {
                cout << st2.top() << nl;
                // st2.pop();
            }
            while (!st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
    }

    return 0;
}