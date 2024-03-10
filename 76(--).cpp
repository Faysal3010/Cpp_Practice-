/*
Write a C program to find power of any number using for loop.  Don’t use pow() function. Example: 
Enter base:    2
Enter power:   5
2 to the power  5 = 32
*/
#include <iostream>
using namespace std;
int main()
{
  double power, base, sum = 1;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter power: ";
  cin >> power;
  cout << base << " to the power " << power << " = ";
  if (power > 0)
  {
    for (int i = 1; i <= power; i += 1)
    {
      sum *= base;
    }
  }
  else
  {
    for (int i = -1; i >= power; i -= 1)
    {
      sum /= base;
    }
  }
  cout << sum;
  return 0;
}
