/*
C++program to print the last digit of a number and all the other digits of it.
*/
#include <iostream>
using namespace std;
int main()
{
  int num, last, other;
  cout << "Enter integer number: ";
  cin >> num;
  last = num % 10;
  other = num / 10;
  cout << "last: " << last << ", other: " << other;
  return 0;
}
