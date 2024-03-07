/*
 Write a C++program to check if an input integer is a multiple of either 2 or 5 but not a multiple of both. 
E.g. of valid numbers are 4, 6, 8, 12, 14, 15, 16, 25, etc. E.g. of invalid numbers are 1, 3, 7, 9, 10, 20, etc.
*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if ((num % 2 == 0 or num % 5 == 0) and !(num % 2 == 0 and num % 5 == 0))
        cout << num << " is a multiple of either 2 or 5 but not a multiple of both\n";
    else
        cout << num << " is not a multiple of either 2 or 5 but a multiple of both\n";
    return 0;
}
