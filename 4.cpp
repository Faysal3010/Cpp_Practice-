/*
Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, 
product, difference, quotient and remainder of the two numbers.

Input:                                               Output:

Insert first number: 10 
Insert second number: 5                                  Sum = 15
                                                         Product = 50
                                                         Difference = 5
                                                         Quotient = 2
                                                         Remainder = 0

*/
#include <iostream>
using namespace std;
int main()
{
  int a, b;

  std::cout << "Insert first number: ";
  std::cin >> a;
  std::cout << "Insert first number: ";
  std::cin >> b;

  std::cout << "Sum = " << a + b
            << "\nProduct = " << a * b
            << "\nDifference = " << a - b
            << "\nQuotient = " << a / b
            << "\nRemainder = " << a % b;

  return 0;
}
