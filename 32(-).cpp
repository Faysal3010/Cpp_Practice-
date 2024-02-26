/*       Read the lengths of base and height of a right angle triangle. 
      Then compute the length of its hypotenuse using Pythagorean theorem.          */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    cout << "Enter the base and height of the right_angle_trianguler: ";
    cin >> a >> b;
    cout << "The lenght of hypotenus: " << sqrt(pow(a, 2) + pow(b, 2)) << endl;
    return 0;
}
