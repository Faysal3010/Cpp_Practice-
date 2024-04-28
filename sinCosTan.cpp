#include <bits/stdc++.h>
#define degree (180 / acos(-1))
#define rad (acos(-1) / 180)
using namespace std;
int main()
{
    double v;
    while (cin >> v)
    {
        cout <<"cosh: "<< acos(v) * degree << endl;
        cout <<"cos: "<< cos(v * rad) << endl;
        cout <<"tanh: "<< atan(v) * degree << endl;
        cout <<"tan: "<< tan(v * rad) << endl;
        cout <<"asin: "<< asin(v) * degree << endl;
        cout <<"sin: "<< sin(v * rad) << endl;
    }
}
