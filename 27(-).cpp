/*    Compute the volume of a sphere; read the radius from user.    */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double r;
    const double pi = 3.14159265;
    cout << "Enter the radius of the sphere: ";
    cin >> r;
    cout << fixed << setprecision(3)
         << "Volume of the sphere is "
         << (double)((4 / 3) * pi * pow(r, 3)) << endl;
    return 0;
}
