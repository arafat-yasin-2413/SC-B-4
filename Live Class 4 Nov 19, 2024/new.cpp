#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n>>m;

    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ar[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // cout<<sizeof(ar)/sizeof(ar[0])<<endl;


    return 0;
}

/*


int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for(int i=0;i<n;i++)
    {
        // if(ar[i]%5 == 0 or ar[i]%7 == 0)
        if(!(ar[i]%5) && !(ar[i]%7))
        {
            cout<<ar[i]<<endl;
        }
    }








int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    cout<<ar[0]<<endl;
    cout<<ar[n-1]<<endl;







int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n; i++)
    {
        if(ar[i] % 2 == 0)
        {
            cout<<ar[i]<<endl;
        }
    }


*/