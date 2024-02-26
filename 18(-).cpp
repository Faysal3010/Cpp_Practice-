/*
    Print the sum of the series:1+2+...+n; read n from user (Hint: 1+2+...+n= n(n-1)/2)
*/

#include <iostream>
using namespace std;
int n;
void fx()
{
  for (int i = 0; i < n; i++)
  {
    cout << i;
    if (i != n)
    {
      cout << "+";
    }
  }
}
int main()
{

  cout << "Enter the value of n: ";
  cin >> n;
  fx();
  cout << n << " is: " << (n * (n + 1)) / 2;
  return 0;
}
