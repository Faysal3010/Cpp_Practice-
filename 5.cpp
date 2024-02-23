/*
Write a program that reads in 3 numbers and prints their average.

Input:                                                   Output:The average is: 4.3
Insert first number: 3 
Insert second number: 8 
Insert third number: 2        
*/

#include <iostream>
#include <iomanip>
int main()
{
  int a, b, c;

  std::cout << "Insert first number: ";
  std::cin >> a;
  std::cout << "Insert first number: ";
  std::cin >> b;
  std::cout << "Insert first number: ";
  std::cin >> c;

  cout << setprecision(3);
  std::cout << "Avg = " << (float)(a + b + c) / 3;

  return 0;
}
