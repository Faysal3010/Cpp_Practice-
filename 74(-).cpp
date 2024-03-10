/*
Write a C program to print the multiplication table (নামতা) of any given integer number.
Sample input/output (bold ones are inputs): 
Enter number to print the multiplication table of: 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20        
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/
#include <iostream>
using namespace std;
int main()
{
  cout << "Enter number to print the multiplication table of: ";
  int n;
  cin >> n;
  for (int i = 1; i <= 10; i++)
  {
    cout << n << " * " << i << " = " << n * i << endl;
  }
  return 0;
}
