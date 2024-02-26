/*  C++program to find maximum between two numbers */

#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cout << "Enter the two number: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " is greater than " << b << endl;
    else if (a < b)
        cout << b << " is greater than " << a << endl;
    else
        cout << a << " is equal to " << b << endl;
    return 0;
}
