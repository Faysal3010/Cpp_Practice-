/*
 Find the volume of a (a) cube and (b) cylinder
Note: Read necessary inputs from user e.g. height and diameter of the cylinder for (a)
*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  cout << "(a) cube and (b) cylinder";
  cout << "\nEnter (a) or (b):  ";
  char ch;
  cin >> ch;
  switch (ch)
  {
  case 'a':
    cout << "Enter a diameter of cube: ";
    float d;
    cin >> d;
    cout << "The volume of the cube is : " << pow(d, 3) << endl;
    break;
  case 'b':
    cout << "Enter the cylinder of radius and height : ";
    float r, h;
    cin >> r >> h;
    cout << "The volume of the cylinder is : " << 3.1416 * r * r * h << endl;
    break;
  default:
    cout << "Wrong input" << endl;
    break;
  }
  return 0;
}
