#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            int y;
            cin >> y;
            cout << "NO" << nl;
        }

        else
        {
            ll even_sum = 0, odd_sum = 0;
            ll even_avg = 0, odd_avg = 0;
            ll even_cnt = 0, odd_cnt = 0;
            for (int i = 1; i <= n; i++)
            {
                int x;
                cin >> x;

                if (i % 2 == 0)
                {
                    even_sum += x;
                    even_cnt++;
                }
                else
                {
                    odd_sum += x;
                    odd_cnt++;
                }
            }

            even_avg = (even_sum / even_cnt);
            odd_avg = (odd_sum / odd_cnt);

            if (even_avg > odd_avg)
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
    }

    return 0;
}