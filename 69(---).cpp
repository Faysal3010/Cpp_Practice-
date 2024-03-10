/*
Write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3
*/
#include <iostream>
using namespace std;
int main()
{
    int n, term = 2, sum = 0;
    cin >> n;
    while (n--)
    {
        cout << term;
        sum += (term * term * term);
        if (n >= 1)
            cout << "^3+";
        else
            cout << "^3";
        term += 3;
    }
    cout << " = " << sum << endl;
}
