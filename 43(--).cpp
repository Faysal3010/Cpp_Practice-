/*  Write a C++program to check whether an input number is a multiple of only 5 (e.g. 5, 10, 15, ...), 
only 11 (e.g. 11, 22, 33, ...), both 5 and 11 (e.g. 55, 110, ....), or neither of them (e.g. 2,3, 4, 6, 7, 8, 9, 12, ....).*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    while (true)
    {
        cout << "ইনপুট num: ";
        cin >> num;
        if (num % 5 == 0)
            cout << num << " শুধুমাত্র 5 গুণিতক \n";
        else if (num % 11 == 0)
            cout << num << " শুধুমাত্র 11 গুণিতক \n";
        else if (num % 5 == 0 and num % 11 == 0)
            cout << num << "  5 এবং 11 উভয়ের গুণিতক\n";
        else 
            cout << num << "  5 এবং 11 উভয়ের কোনটিই নয় গুণিতক\n";
    }
    return 0;
}
