#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RUNCOMPARE

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

        int ar[n], br[n];

        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n; i++)
            cin >> br[i];

        int anyone_happy = 0;
        for (int i = 0; i < n; i++)
        {
            int mx = max(ar[i], br[i]);
            int mn = min(ar[i], br[i]);

            // cout << "mx = " << mx << ", mn = " << mn << nl;

            if (mx > mn * 2)
                anyone_happy++;
        }

        cout << n - anyone_happy << nl;
    }
    return 0;
}