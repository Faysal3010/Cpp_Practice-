/*
Write a program that reads in the radius of a circle and prints the circle’s diameter, circumference and area.
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
  float i;
  const double x = 3.1416;
  cout << "Enter the circle radius: ";
  cin >> i;
  cout << fixed << setprecision(2);
  cout << "Diameter of the circle: " << i * 2 << "\nCircumference: " << 2 * x * i << "\nAngle of the circle: " << x * pow(i, 2);
  return 0;
}
