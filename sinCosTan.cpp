#include <bits/stdc++.h>
#define degree (180 / acos(-1))
#define rad (acos(-1) / 180)
using namespace std;
int main()
{
    double v;
    while (cin >> v)
    {
        cout << acos(v) * degree << endl;
        cout << cos(v * rad) << endl;
    }
}
