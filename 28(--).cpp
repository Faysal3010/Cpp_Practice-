/*    Read the co-ordinates of two points (x1,y1) and (x2,y2) from user. 
Compute the midpoints of these two points and print it up to 2 decimal points.         */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x1, x2, y1, y2;
    cout << "Enter the coordinates of the first point: ";
    cin >> x1 >> y1;
    cout << x1 << "," << y1 << endl;
    cout << "Enter the coordinates of the second point: ";
    cin >> x2 >> y2;
    cout << x2 << "," << y2 << endl;
    double midX = (x1 + x2) / 2, midY = (y1 + y2) / 2;
    cout << "Midpoint coordinates(x,y): " << fixed << setprecision(2) << midX << " , " << midY << endl;
    return 0;
}
