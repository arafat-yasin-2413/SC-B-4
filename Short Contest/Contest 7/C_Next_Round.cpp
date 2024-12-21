#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 and arr[i] >= arr[k - 1])
        {
            cnt++;
        }
    }

    cout << cnt << nl;

    return 0;
}