/*
Write a program to compute the following series using while loop: 4+11+18++….+n
*/
#include <iostream>
using namespace std;
int main()
{
    int n, term = 4, sum = 0;
    cin >> n;
    while (n--)
    {
        cout << term;
        sum += term;
        if (n >= 1)
            cout << "+";
        term += 7;
    }
    cout<<" = "<<sum << endl;
}
