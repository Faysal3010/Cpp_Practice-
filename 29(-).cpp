/*       Find the angle of a segment in a circle; read the arc length and radius from user.       */
#include <iostream>
using namespace std;
int main()
{

  double arc_length, radius;
  cout << "Enter arc length: ";
  cin >> arc_length;
  cout << "Enter radius: ";
  cin >> radius;
  cout << "The angle of a segment in a circle: " << arc_length / radius << endl;
  return 0;
}
