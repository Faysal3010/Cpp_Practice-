/*Write a C program that can be used to find whether a number is a prime number or not */
#include <iostream>
using namespace std;
bool IsPrime(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;
  return true;
}
int main()
{
  cout << "Enter any number: ";
  int n;
  cin >> n;
  IsPrime(n) ? cout << n << " is prime number" : cout << n << " is not a prime number";
  return 0;
}

//---------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    for (int i = 2; i < n/2; i++)
    {
        if (n % i == 0)
            m = 1;
    }
    if (m == 1)
        cout << n << " is not prime number";
    else
        cout << n << " is a prime number";
}
