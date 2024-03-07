/*
 Write a C++program to input all angles of a triangle and check whether triangle is valid or not. 
(Hint: sum of all angles of any triangle is 180 degrees)
*/

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "\tinput three angle of a triangle: "
         << "\nEnter\ta  b  c\n\t";
    cin >> a >> b >> c;
    if ((a+b+c)==180)
            cout << "\"The triangle is valid\"" << endl;
        else
            cout << "The triangle is invalid" << endl;
    return 0;
}
