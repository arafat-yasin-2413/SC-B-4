#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_B

int main() {
	// your code goes here
    double a,b,c;
    cin>>a>>b>>c;
    
    // cout<<M_PI<<endl;
    
    double theta = (M_PI*(c*1.0)/180.0);
    // double theta = (3.14159265358979323846*(c*1.0)/180.0);
    
    double area = 0.5 * a * b * sin(theta);
    
    cout<<fixed<<setprecision(8)<<area<<endl;
    
    
    double third_side = sqrt( (a*a) + (b*b) - ((2*a*b) * cos(theta)) );
    
    double circumference = (a+b+third_side);
    
    cout<<fixed<<setprecision(8)<<circumference<<endl;
    
    double height = b * sin(theta);
    
    
    cout<<fixed<<setprecision(8)<<height<<endl;
    
    return 0;
}
