/* Write a C++ program to read an integer and compute the sum of digits in it. Sample Input/Output:
Enter any integer: 452
Sum of digits in 452: 11 */
#include <iostream>
using namespace std;
int main()
{
  int num, digit, sum = 0;
  cout << "Enter any Number: ";
  cin >> num;
  cout << " Sum of digits in ";
  while (num != 0)
  {

    digit = num % 10;

    if (digit != 0)
    {
      cout << digit << "  ";
      sum += digit;
    }
    num /= 10;
  }
  cout << " : " << sum;
  return 0;
}

//-----------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}
