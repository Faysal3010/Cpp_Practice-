/* Write a C++ program to find all the factors of a number.*/
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter any number to find its factor: ";
    cin >> n;
    cout << "All factors of " << n << " are: ";
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    return 0;
}


