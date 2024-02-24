/*
C++program to print size of variables of different data types. 
*/


#include <iostream>
// #include <math.h>
//#include <iomanip>
using namespace std;
int main()
{
  char a[10];
  cout << "size of int: " << sizeof(int)
       << " bytes\nsize of char a[10]: " << sizeof(a)
       << " bytes\nsize of char: " << sizeof(char)
       << " bytes\nsize of bool: " << sizeof(bool)
       << " bytes\nsize of float: " << sizeof(float)
       << " bytes\nsize of double: " << sizeof(double);
  return 0;
}
