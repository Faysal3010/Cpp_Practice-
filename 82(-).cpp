/*Try yourself 3: Write a C program to print all the odd factors of a given number. */
#include <iostream>
using namespace std;
int main()
{
  int i, n;
  cout << "Enter any number to find its factor: ";
  cin >> n;
  cout << "All odd factors of " << n << " are: ";
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0 and i % 2 == 0)
      cout << i << " ";
  }
  return 0;
}
