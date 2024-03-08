/*     Find the maximum between two numbers using switch case.  */
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    if (cin.fail())
    {
        cout << "Please enter a number!!" << endl;
    }
    else if (num1 == num2)
    {
        cout << "Equal number";
    }

    else
    {
        switch (num1 > num2)
        {
        case 1:
            cout << num1 << " > " << num2 << endl;
            break;
        case 0:
            cout << num1 << " < " << num2 << endl;
            break;
        }
    }
    return 0;
}
