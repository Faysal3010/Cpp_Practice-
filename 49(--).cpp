/*
Write a C++program that reads the radius r of a circle and the side a of a square from user and
then checks if that square can be placed inside that circle or not. Hint: Use Pythagorean theorem.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter a radius of a circle: ";
    double r, a;
    cin >> r;
    cout << "\nEnter a side of a square: ";
    cin >> a;
    if (2 * r >= sqrt(2) * a)
        cout << "Square can be placed inside that circle";
    else
        cout << "Square can't be placed inside that circle";
    return 0;
}
