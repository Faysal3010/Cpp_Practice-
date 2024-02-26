/*        Read two integer numbers m, n from user. Compute the value of m*2n as well as the value of m <<n. 
Do you see a pattern in the result? Now compute the value of m/2n as well as the value of m >>n. Do you see a pattern?*/

#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
int main()
{
    int n, m;
    cout << "\nEnter the number of m and n: ";
    cin >> m >> n;
    cout << "m<<n: " << (m << n) << " ; Binary: "
         << bitset<8>(m << n) << endl;
    cout << "m>>n: " << (m >> n) << " ; Binary: "
         << bitset<8>(m >> n) << endl;

    cout << "\nm*2^n: " << (int)(m * pow(2, n)) << " ; Binary: "
         << bitset<8>((int)(m * pow(2, n))) << endl;
    cout << "m/2^n: " << (int)(m / pow(2, n)) << " ; Binary: "
         << bitset<8>((int)(m / pow(2, n))) << endl;

    return 0;
}
