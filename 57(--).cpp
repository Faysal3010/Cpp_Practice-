/* Write a C program to check whether a year is a leap year or not, using switch case.*/
#include <iostream>
// #include <cctype>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num ;
    if (cin.fail())
    {
        cout << "Invalid Input" << endl;
    }
    else
    {
        switch (num%4==0 and num%100!=0 or num%400==0) // num&1
        {
        case 0:
            cout << "Not leap year" << endl;
            break;
        case 1:
            cout << "Leap year" << endl;
            break;
        }
    }
    return 0;
}
