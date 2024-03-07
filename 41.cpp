/*  Write a C++program that decides whether a person is eligible to work in a particular company or not. 
The company policy is: If the person’s age is between 25 and 45, s/he are eligible to work.
 Otherwise, your software should say “You are too young or too old”. */

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 25 and age <= 45)
        cout << "Eligible to work" << endl;
    else
        cout << "You are too young or too old";
    return 0;
}
