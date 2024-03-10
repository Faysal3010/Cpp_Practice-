/*
Write a program to print all even numbers between m and n (m, n are user inputs) in reverse order.
Sample input/output (bold ones are inputs):
Enter m: 9
Enter n: 21
All even numbers between 9 and 20 in reverse order: 20, 18, 16, 14, 12, 10
*/

#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    cout << "All even numbers between " << m << " and " << n << " in reverse order: ";
    if (m > n)
    {
        for (n; n <= m; n++)
        {
            if (n % 2 == 0)
                cout << " " << n;
        }
    }
    else
    {
        for (n; n >= m; n--)
        {
            if (n % 2 == 0)
                cout << " " << n;
        }
    }
    return 0;
}
