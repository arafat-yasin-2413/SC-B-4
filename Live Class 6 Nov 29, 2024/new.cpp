#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << nl;

    return 0;
}

/*































int n;
    cin >> n;

    int x = 0;
    while (n--)
    {

        string s;
        cin >> s;

        if (s[1] == '+')
        {
            x++;
        }
        if (s[1] == '-')
        {
            x--;
        }
    }
    cout << x << nl;



















int i = 0, j = s.size() - 1;

    bool ans = true;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            ans = false;
        }
        i++;
        j--;
    }

    if (ans)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;





















for (int i = 0; i < s.size(); i++)
    {
        // cout << s[i] << " ";
        if(s[i] == 'H' or s[i] == 'P' or s[i] == '+' or s[i] == 'Q' or s[i] == 'h' or s[i] == 'p' or s[i] == 'q')
        {
            cout<<"Yes"<<endl;
            break;
        }
        else
        {
            cout<<"No"<<nl;
            break;
        }
    }
    cout << nl;

*/