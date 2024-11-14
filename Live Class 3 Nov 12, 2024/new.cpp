#include <bits/stdc++.h>
using namespace std;

void getSum(int a, int b)
{
    cout << a + b << endl;
}

void getSubtract(int a, int b)
{
    cout << a - b << endl;
}

void getMult(int a, int b)
{
    cout << a * b << endl;
}

void getDiv(int a, int b)
{
    cout << a / b << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int a, b;
    // cin >> a, b;

    // getSum(a,b);
    // getSubtract(a,b);
    // getMult(a,b);
    // getDiv(a,b);

    // int var = 23;
    // int *ptr = &var;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    int n;
    cin >> n;
    
    auto m = &n;
    *m = *m * 2;

    cout<<n<<endl;


    return 0;
}