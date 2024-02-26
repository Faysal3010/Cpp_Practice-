/*   C programs to demonstrate bitwise operators:    */

#include <iostream>
using namespace std;
int main()
{
    cout << ".....64 32 16 8 4 2 1\nEnter number: ";
    int num;
    cin >> num;
    cout << "\nBinary Left Shift Operator number << i : ";
    int i;
    cin >> i;
    int x = num << i;
    cout << "\n"
         << num << "<<" << i << "=" << x;
    cout << "\nBinary Right Shift Operator number >> i : ";
    cin >> i;
    int f = x >> i;
    cout << "\n"
         << x << ">>" << i << "=" << f;
    return 0;
}
