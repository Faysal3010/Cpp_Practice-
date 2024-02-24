/*
C++Program to compute squared root and cube of an input number.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
// #include <stdio.h>
int main()
{
  float a;
  cout << "Enter the number: ";
  cin >> a;
  cout <<setprecision(2)<< fixed;
  cout << sqrt(a) << " " << pow(a, 3) << endl;
  return 0;
}
