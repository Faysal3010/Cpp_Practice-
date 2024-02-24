/*
Compute the value of 5x3-4x2+√(x)+3; read x from user
*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float x;
  cout << "Enter x: ";
  cin >> x;
  x = 5 * pow(x, 3) - 4 * pow(x, 2) + sqrt(x) + 3;
  cout << "value: " << x << endl;
  return 0;
}
