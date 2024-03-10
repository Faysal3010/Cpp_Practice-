/*
Write a program that takes a minimum number, a maximum number, and common ratio and prints the sum of 
the geometric series between them. 
Sample input/output (bold ones are inputs): 
Enter minimum: 5
Enter maximum: 150
Enter Common ratio: 3
The Sum is: 5 + 15 + 45 + 135 = 200 
*/
#include <iostream>
using namespace std;
int main()
{
  int sum = 0, i, min, max, ratio;
  cout << "Enter minimum: ";
  cin >> min;
  cout << "Enter maximum: ";
  cin >> max;
  if (min >= max)
  {
    cout << "maximum and minimum Error !!";
    return 0;
  }
  cout << "Enter common ratio: ";
  cin >> ratio;
  cout<<"The Sum is: ";
  for (min; min <= max;)
  {
    cout << min;
    sum += min;
    min *= ratio;
    if (min < max)
    {
      cout << " + ";
    }
  }
  cout << " = " << sum;
  return 0;
}
