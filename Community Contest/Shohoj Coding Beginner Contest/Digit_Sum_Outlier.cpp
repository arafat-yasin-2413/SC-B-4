#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int digitSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n = n / 10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // cout << digitSum(551) << nl;

    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int prevSum = digitSum(ar[0]);
    if (prevSum != digitSum(ar[1]))
    {
        cout << 1 << nl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            int x = ar[i];
            int currentSum = digitSum(x);

            if (prevSum == currentSum)
            {
                continue;
            }

            if (prevSum != currentSum)
            {
                cout << i + 1 << nl;
                break;
            }
        }
    }

    return 0;
}