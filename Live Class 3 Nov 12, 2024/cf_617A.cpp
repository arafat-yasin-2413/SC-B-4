#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int cnt = 0;
    while (x != 0)
    {
        if (x >= 5)
        {
            cnt += x/5;
            x = x%5;
        }

        if (x >= 4)
        {
            cnt += x/4;
            x = x%4;
        }
        if (x >= 3)
        {
            cnt += x/3;
            x = x%3;
        }

        if (x >= 2)
        {
            cnt += x/2;
            x = x%2;
        }

        if (x >= 1)
        {
            cnt += x/1;
            x = x%1;
        }
    }

    cout << cnt << endl;

    return 0;
}