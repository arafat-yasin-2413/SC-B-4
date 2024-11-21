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

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;



    return 0;
}

/*


int suff[n];
    suff[n - 1] = ar[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = ar[i] + suff[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << suff[i] << " ";
    }
    cout << endl;




















int pref[n];
    pref[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pref[i] << " ";
    }
    cout << endl;

*/