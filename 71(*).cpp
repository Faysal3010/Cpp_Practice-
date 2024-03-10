/*Write a program to compute the following series using while loop: 5^2+9^2+15^2+23^2+....+n^2*/
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, term1 = 2, term = 5, n, i = 0;
    cin >> n;
    while (++i <= n)
    {
        cout << term;
        term1 += 2;
        sum += (term * term);
        term += term1;
        if (i < n)
            cout << "^2 + ";
        else
            cout << "^2";
    }
    cout << " = " << sum;
    return 0;
}

//----------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, x = 0, m, i = 1, sum = 5;
  cout << "Enter the number of n : ";
  cin >> n;
  while (i <= n)
  {
    cout << sum;
    if (i < n)
    {
      cout << "^2+";
    }
    else
    {
      cout << "^2";
    }
    m = pow(sum, 2);
    sum = 2 * i + 2 + sum;
    x += m;
    i++;
  }
  cout << " = " << x << endl;
  return 0;
}

//---------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    int term = 4, sum = 0, i = 5, n, count = 0;
    cout << "Enter n: ";
    cin >> n;

    while (n > count) {
        if (i != 5) {
            cout << " + ";
        }

        cout << i << "^2";
        sum += i * i;
        i += term;
        term += 2;
        count++;
    }
    cout << " = " << sum << endl;
    return 0;
}

