#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool visited[6] = {0};
    for (int i = 1; i <= 5; i++)
    {
        int x;
        cin >> x;
        visited[x] = 1;
    }

    for (int i = 1; i <= 5; i++)
    {
        if (visited[i] == 0)
        {
            cout << i << nl;
        }
    }

    return 0;
}