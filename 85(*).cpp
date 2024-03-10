/*Write a C program to check whether an input number is a perfect number or not. 
A perfect number is a positive integer which is equal to the sum of its proper positive factors. 
For e.g. 6 is a perfect number; because proper factors of 6 are 1, 2, 3 and 1+2+3 = 6. 
Also, 28 is a perfect number since sum of its factors = 1+2+4+7+14 = 28.*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        cout << n << " is a perfect number." << endl;
    }
    else
    {
        cout << n << " is not a perfect number." << endl;
    }
}

//-------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cout << "Enter number: ";
  cin >> n;
  if (n % 2 != 0 and n >= 1)
  {
    cout << "No a perfect number" << endl;
    return false;
  }
  for (int i = 1; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      cout << i;
      sum+=i;
      if (i < (n/2))
        cout << "+";
    }
  }

  if(sum==n)
  cout <<"="<< sum<<"\nIt is a perfect number"<< endl;
  else cout <<"\nNo a perfect number"<< endl;
  return 0;
}



