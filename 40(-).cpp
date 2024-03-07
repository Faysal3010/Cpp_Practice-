/*      Write a C++program to enter month number and print number of days in month   */

#include <iostream>
using namespace std;
int main()
{
    int month,day;
    cout << "Enter month(1-12): ";
    cin >> month;
    if (month >= 1 && month <= 12)
        switch (month)
        {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            day = 31;
            break;
        case 4:case 6:case 9:case 11:
            day = 30;
        case 2:
            day = 28;//assuming non-leap year;
        }
cout<<"month: "<<month<<" day: "<<day<<endl;
    return 0;
}
