/*2. C++program to find maximum among three numbers:*/
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    while (1)
    {
        cout << "\nEnter the three numbers: ";
        cin >> a >> b >> c;
        if (a > b & a > c)
        {
            cout << a;
        }
        else if (b > c)
        {
            cout << b;
        }
        else if (a == c & b == c)
            cout << "All equal" << endl;
        else
            cout << c;
    }

    return 0;
}
