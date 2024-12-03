#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://toph.co/p/better-passwords

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string result = "";

    result += s[0] - 32;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 's')
        {
            result += '$';
        }
        else if (s[i] == 'i')
        {
            result += '!';
        }
        else if (s[i] == 'o')
        {
            result += "()";
        }
        else
        {
            result += s[i];
        }
    }

    result += '.';

    cout << result << nl;
    return 0;
}