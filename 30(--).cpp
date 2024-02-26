/*    Compute the area of a (a) trapezoid and (b) parallelogram. Read necessary inputs from user.    */

#include <iostream>
using namespace std;
int main()
{
    int a,b,h;
    cout << "Enter the a , b , h of the trapeZoid: ";
    cin >> a>>b>>h;
    int trapezoid=((.5)*(a+b)*h);
    cout<<"Area of trapezoid: "<<trapezoid<<endl;
    cout << "Enter the  b , h of the parallelogram: ";
    cin >>b>>h;
    int parallelogram=b*h;
    cout<<"Area of parallelogram: "<<(double)parallelogram<<endl;
    return 0;
}
