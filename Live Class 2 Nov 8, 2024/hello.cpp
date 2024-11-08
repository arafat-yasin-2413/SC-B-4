#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

void solve()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;

    if (sum % 5 == 0)
        cout << "YES" << endl;
    else if (sum % 5 != 0)
        cout << "NO" << endl;
    cout<<"------------------"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }

    return 0;
}

/*



*/

/*
int n,times;
    cin>>n>>times;

    int sum = 0;
    for(int i=n; i<=times ; i++)
    {
        sum += (i*i);
    }
    cout<<sum<<endl;

*/

/*
int n;
    cin >> n;

    cout << (n * (n + 1) )/ 2 << endl;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // sum += i;
        sum = sum + i;
    }
    cout << sum << endl;
*/

/*
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    cout << endl;

*/

/*
for(int i=2, j = 1; j<=5; i*=2,j++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

*/

/*
// int a = 3, b = 5, c = 6;

    // int ans = ++a + b++ - ++c-b;
    // cout<<ans<<endl;

    // int i = 5;

    // i++;
    // cout << i << endl;
    // ++i;
    // cout << i << endl;


*/