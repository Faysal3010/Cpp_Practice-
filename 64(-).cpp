/* Write a C program to print all odd numbers from 1 to n (n is user input) using for loop. */
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i&1)cout << i << " ";
    }
    return 0;
}

//----------------------------------------------------


#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    cout << "All odd numbers from 1 to " << n << " are:";
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << " " << i;
        }

    }
        return 0;
}
