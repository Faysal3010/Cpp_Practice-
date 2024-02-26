/*       Read an integer number n from user. Compute the bitwise AND of n and 1. 
Do you see a pattern in the result? (Hint: observe the difference in the result when n is odd vs. when n is even)*/

#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of n: ";
    cin >> n;
    int x = (n & 1);
    if (x == 0)
    {
        cout << "even\n" << bitset<1>(x);
    }
    else
    {
        cout << "odd\n" << bitset<1>(x);
    }
    return 0;
}
