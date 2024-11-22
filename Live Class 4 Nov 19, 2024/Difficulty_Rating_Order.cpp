#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RATINGINPRAC

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

        int ar[n];

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i + 1] < ar[i])
            {
                flag = true;
            }
        }

        if (flag == true)
        {
            cout << "No" << nl;
        }
        else
        {
            cout << "Yes" << nl;
        }
    }
    return 0;
}