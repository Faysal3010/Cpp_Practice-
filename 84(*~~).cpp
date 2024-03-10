/*Write a C++ program to read an integer from user and output its last and first digit. Hint: Like practice 2 & 3,
 reduce the number by dividing it (by 10) again and again (in a loop) until you reach the first digit.*/

#include <iostream>
using namespace std;
int main()
{
  int last_digit, first_digit, num;
  cout << "Enter any number: ";
  cin >> num;
  last_digit = num % 10;
  while (num >= 10)
    num /= 10;
  first_digit = num;
  cout << "first number: " << first_digit << endl;
  cout << "last number: " << last_digit << endl;
  return 0;
}
