#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int b_arr[n];
    for (int i = n - 1, j = 0; i >= 0, j < n; i--, j++)
    {
        b_arr[j] = ar[i];
    }

    for (int i = 0; i < n; i++)
        cout << b_arr[i] << " ";
    cout << nl;

    return 0;
}