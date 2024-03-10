/*
Write a program that takes a minimum number, a maximum number, and common difference and prints the sum of the arithmetic series between them.
Sample input/output (bold ones are inputs):
Enter minimum: 11
Enter maximum: 19
Enter Common difference: 2
The Sum is: 11 + 13 + 15 +17 +19 = 75
*/
#include <iostream>
using namespace std;
int main()
{
  int sum = 0, i, min, max, diff;
  cout << "Enter minimum: ";
  cin >> min;
  cout << "Enter maximum: ";
  cin >> max;
  cout << "Enter difference: ";
  cin >> diff;
  if (min >= max)
  {
    cout << "maximum and minimum or difference Error !!";
    return 0;
  }
  for (min; min <= max;)
  {
    cout << min;
    sum += min;
    min += diff;
    if (min < max)
    {
      cout << " + ";
    }
  }
  cout << " = " << sum;
  return 0;
}
