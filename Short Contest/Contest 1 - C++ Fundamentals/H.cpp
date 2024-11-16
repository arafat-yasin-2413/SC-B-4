#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int cnt = 0;
    while (true)
    {
        a = a * 3;
        b = b * 2;

        cnt++;
        if (a > b)
        {
            break;
        }
    }

    cout << cnt << nl;

    return 0;
}