/*Write a C++ program that computes the sum of the series:  3+7+11+…+n, where n is a user input*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of n: ";
    int n, sum = 0, term = 3;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << term;
        sum = sum + term;
        if (i < n)
        {
            cout << "+";
        }
        term += 4;
    }
    cout << "=" << sum << endl;
    return 0;
}
