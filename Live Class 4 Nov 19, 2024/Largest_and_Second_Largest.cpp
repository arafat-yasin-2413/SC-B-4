#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND

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

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int first_max = INT_MIN;
        int first_max_index = -1;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > first_max)
            {
                first_max = ar[i];
                first_max_index = i;
            }
        }

        // ar[first_max_index] = 0;
        for(int i=0; i<n; i++)
        {
            if(ar[i] == first_max)
            {
                ar[i] = 0;
            }
        }

        int second_max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > second_max)
            {
                second_max = ar[i];
            }
        }

        cout << first_max + second_max << nl;
    }
    return 0;
}