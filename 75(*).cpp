/*Write a C program to compute the value of nPr = n*(n-1)*(n-2)*…*(n-r+1), read n and r from user.*/
#include <iostream>
using namespace std;
int main()
{
    int i, n, r, multiple = 1;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    if (r <= -1 or n < r)
    {
        cout << "Math Error";
        return 1;
    }
    cout << n << "P" << r << "=";
    for (i = 0; i < r; i++)
    {
        multiple *= n - i;
    }
    cout << multiple;
    return 0;
}
