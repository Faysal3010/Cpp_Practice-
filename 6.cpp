/*
Convert Celsius to Fahrenheit unit using the following formula. 
Take the value of C as input from user and calculate the value of F.
F= C * (9/5) + 32
*/

#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
  float C;
  cout << "Convert Celsius to Fahrenheit unit !! \n"
       << "Insert Celsius as C: ";
  cin >> C;
  cout << setprecision(3);
  cout << "Fahrenheit unit as F = " << C * (9. / 5) + 32;

  return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
// #include <iomanip>
int main()
{
  // without temporary....
  float F, C, K;
  int No;

  cout << "1.F to C\n2.C to F\n3.K to C\n\nEnter the No:";
  cin >> No;
  switch (No)
  {
  case 1:
    cout << "Fahrenheit: ";
    cin >> F;
    cout << "Fahrenheit to Celsius: " << (F - 32) / 1.8 << endl;
    break;
  case 2:
    cout << "Celsius: ";
    cin >> C;
    cout << "Celsius to Fahrenheit: " << 1.8 * C + 32 << endl;
    break;
  case 3:
    cout << "Celsius: ";
    cin >> C;
    cout << "Celsius to kelvin: " << C + 273 << endl;
    break;

  default:
    cout << "ERROR!!" << endl;
    break;
  }
  return 0;
}
