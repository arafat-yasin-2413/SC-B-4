#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FAVOURITENUM

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

        if (n % 2 == 0)
        {
            if (n % 7 == 0)
            {
                cout << "Alice" << nl;
            }
            else
            {
                cout << "Charlie" << nl;
            }
        }

        else if (n % 2 != 0)
        {
            if (n % 9 == 0)
            {
                cout << "Bob" << nl;
            }
            else
            {
                cout << "Charlie" << nl;
            }
        }

        else
        {
            cout << "Charlie" << nl;
        }
    }

    return 0;
}