/*     C Program to find surface area of a sphere:    */

#include <iostream>
using namespace std;
int main()
{
     float pi=3.1416,radius;
     cout << "Enter the radius of the sphere : ";
     cin >> radius;
     cout << "The surface of the sphere " << 4*radius*radius*pi << endl;
     return 0;
}
