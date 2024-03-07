/*
 Write a C++program to input sides of a triangle and check whether triangle is valid or not 
(Hint: if sum of any two sides of a triangle is greater than the third side then the triangle is valid)
*/

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "\tinput three sides of a triangle: "
         << "\nEnter\ta  b  c\n\t";
    cin >> a >> b >> c;
    if (((a + b) > c) and ((c + b) > a) and ((a + c) > b))
        cout << "\"The triangle is valid\"" << endl;
    else
        cout << "The triangle is invalid" << endl;
    return 0;
}
