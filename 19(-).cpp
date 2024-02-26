/*       Print the sum of the series:1^2+2^2+...+n2; read n from user. */


#include <iostream>
using namespace std;
int n;
void fx()
{
  for (int i = 0; i < n; i++)
  {
    cout << i<<"^2";
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
  cout <<n << "^2 is: " << (n * (n + 1)*(2*n+1)) / 6;
  return 0;
}
