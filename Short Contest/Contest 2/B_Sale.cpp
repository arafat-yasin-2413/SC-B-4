#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] >= ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    int total_earning = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << ar[i] << " ";
        if (ar[i] < 0)
        {
            if (m == 0)
                break;
            total_earning += (abs(ar[i]));
            m--;
        }
    }
    // cout << nl;

    cout << total_earning << nl;

    return 0;
}