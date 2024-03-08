/*
Read a floating point number from user and check if it has any fractional part (e.g. 4.5, 6.9,...) or not (e.g. 4, 5, ...). 
If it has a fractional part then print “Not an integer”, otherwise print “integer”.
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any number: ";
    double number;
    cin >> number;
    int i = number;
    if (number / i == 1)
        cout << "integer";
    else
        cout << "Not an integer";
    return 0;
}
-----------------------------------------
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any number: ";
    double number;
    cin >> number;
    int i = number;
    if (number == i)
        cout << "integer";
    else
        cout << "Not an integer";
    return 0;
}
-----------------------------------------
#include <iostream>
using namespace std;
int main()
{
    double number;
    cout << "Enter a number: ";
    cin >> number;
    if (number != static_cast<int>(number))
    {
        cout << "Not an Integer" << endl;
    }
    else
        cout << "Integer";
    return 0;
}
-----------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any number: ";
    double number;
    cin >> number;
    if ((int)number==number)
        cout << "integer";
    else
        cout << "Not an integer";
    return 0;
}
