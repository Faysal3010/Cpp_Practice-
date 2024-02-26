/*        Compute the volume and surface area of a cone. Read the radius and height of the cone from user.     */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double pi = 3.141592, r, h, l;
    cout << "Enter the radius and height of the cone: ";
    cin >> r >> h;
    cout << "Volume of cone: " << ((1. / 3) * pi * h * pow(r, 2)) << endl;

    cout << "Enter the radius and length of the cone: ";
    cin >> r >> l;
    cout << "surface of cone: " << pi * r * (l + r) << endl;
    return 0;
}
