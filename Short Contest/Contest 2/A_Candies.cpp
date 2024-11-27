#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

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

        int sz = n * 2;
        int ar[sz];
        for (int i = 0; i < sz; i++)
            cin >> ar[i];

        for (int i = 0; i < sz - 1; i++)
        {
            for (int j = i + 1; j < sz; j++)
            {
                if (ar[i] >= ar[j])
                {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }

        int cnt = 0;
        bool isValid = true;
        for (int i = 0; i < sz - 1; i++)
        {
            if (ar[i] == ar[i + 1])
            {
                cnt++;
                if (cnt >= 2)
                {
                    isValid = false;
                    break;
                }
            }
            else if (ar[i] != ar[i + 1])
            {
                cnt = 0;
            }
        }

        // for (int i = 0; i < sz; i++)
        // {
        //     cout << ar[i] << " ";
        // }
        // cout << nl;

        if (isValid == false)
            cout << "No" << nl;
        else
            cout << "Yes" << nl;
    }

    return 0;
}