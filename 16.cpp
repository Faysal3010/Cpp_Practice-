/*
Compute quotient and remainder when you divide x by y (read x, y from user). 
Also, compute quotient and remainder when you divide y by x. Print all these four results.
*/
#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cout << "Enter x: ";
  cin >> x;
  cout << " y: ";
  cin >> y;
  cout << "x/y quotient: " << x / y << endl;
  cout << "y/x quotient: " << y / x << endl;
  cout << "x%y remainder: " << x % y << endl;
  cout << "y%x remainder: " << y % x << endl;
  return 0;
}
