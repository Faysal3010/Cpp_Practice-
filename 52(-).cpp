/*Cpp program to check whether an input is an odd number or an even number using switch-case*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    if (cin.fail())
    {
        cout << "Invalid Input" << endl;
    }
    else
    {
        switch (num % 2) //num&1
        {
        case 0:
            cout << "Even Number" << endl;
            break;
        case 1:
            cout << "Odd Number" << endl;
            break;
        }
    }
}
