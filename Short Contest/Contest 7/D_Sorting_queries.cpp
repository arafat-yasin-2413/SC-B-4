#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

void sort_queue_in_asc_order(queue<int> &q)
{
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }

    sort(v.begin(), v.end());

    for (auto el : v)
    {
        q.push(el);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    queue<int> q;
    while (Q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int val;
            cin >> val;
            q.push(val);
        }

        else if (op == 2)
        {
            int x = q.front();
            q.pop();
            cout << x << nl;
        }

        else if (op == 3)
        {
            sort_queue_in_asc_order(q);
        }
    }

    return 0;
}