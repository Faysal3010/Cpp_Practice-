/*Write a C++ program that reads an integer and then computes & prints the factorial of that integer*/
#include <iostream>
using namespace std;
int main()
{
     int factor = 1, n;
     cout << "Enter number of n: ";
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          cout <<i;
          if (i < n)
          {
               cout << "!";
          }
          factor *= i;
     }
     cout << "=" << factor << endl;
     return 0;
}
