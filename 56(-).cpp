/*
Use switch case to make a simple calculator that can add, subtract, multiply or divide two input numbers. The operator (+ ,   -  ,  *  or   /) should also be read from user.
Sample Input/Output:
Enter two numbers: 4.5 2.9
Enter operator: +
4.5 + 2.9 = 7.4
*/

#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    if (cin.fail())
    {
        cout << "Please enter a number!!" << endl;
        return 0;
    }
   char ch;
   cout << "Enter operator: ";
   cin >> ch;
   switch (ch){
    case '+': cout << num1 << " + " << num2<<" = "<<num1+num2; break;
    case '-': cout << num1 << " - " << num2<<" = "<<num1-num2; break;
    case '/': cout << num1 << " / " << num2<<" = "<<num1/num2; break;
    case '*': cout << num1 << " * " <<num2<<" = "<<num1*num2; break;
    default: cout <<"Invalid operator";
   }
    return 0;
}
