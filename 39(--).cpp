/*
. C++program to check Leap Year (a year is a leap year if –
 (i) it is divisible by 4 but not divisible by 100 OR 
(ii) it is divisible by 400):
*/

#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if ((year % 4 == 0) and (year % 400 == 0) or (year % 100 != 0))
        cout << "Leap year: " << year << endl;
    else
        cout << "Not Leap year: " << year << endl;

    return 0;
}
