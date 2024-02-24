/*
C++program to convert days to years weeks and days
*/

#include <iostream>
using namespace std;

int main()
{
  int i;
  cout << "Enter days: ";
  cin >> i;
  int year = i / 365;
  int week = (i % 365) / 7;
  int day = i - ((year * 365) + (week * 7));
  cout << "year: " << year << "\nweek: " << week << "\nday: " << day << endl;
  return 0;
}
