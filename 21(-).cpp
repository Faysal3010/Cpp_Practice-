/*  use AND OR XOR */

#include <iostream>
using namespace std;
int main()
{
     int a, b;
     cout << "Enter two numbers: ";
     cin >> a >> b;
     cout << "a AND b: " << (a & b);
     cout << "\na OR b: " << (a | b);
     cout << "\na XOR b: " << (a ^ b);
     return 0;
}
