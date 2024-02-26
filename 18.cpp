/*
      Solve the equation: ax2+bx+c=0 and print the solutions. Read a,b,c from user
Hint: compute the values of (-b+sqrt(b2-4ac))/2a and (-b-sqrt(b2-4ac))/2a; here sqrt is a C function that computes the squared root of a number

*/



#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float a, b, c;
  cout << "\tax^2+bx+c=0"
       << "\nEnter\ta  b  c\n\t";
  cin >> a >> b >> c;
  cout << "value x: " << ((-b + sqrt(pow(b, 2) - 4 * a * c))/2*a)
       << " , " << ((-b - sqrt(pow(b, 2) - 4 * a * c))/2*a) << endl;
  return 0;
}
