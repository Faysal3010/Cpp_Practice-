/*
Write a C++ Program to convert a lowercase letter to uppercase:
*/
/*
Write a program that converts an uppercase letter to lowercase.
*/
#include <iostream>
using namespace std;
int main()
{
  char a,c;
  cout << "Enter a character: ";
  cin >> (a);
  cout << "upperCase: " <<(char) toupper(a) << endl;
  cout << "lowerCase: " <<(char) tolower(a) << endl;
  return 0;
}



