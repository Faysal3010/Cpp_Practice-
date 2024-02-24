/*
Decimal to Hexadecimal
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    while (a != 0)
    {
        b = a % 16;
        a = a / 16;
        if(b==10)cout<<'A';
        else if(b==11)cout<<'B';
        else if(b==12)cout<<'C';
        else if(b==13)cout<<'D';
        else if(b==14)cout<<'E';
        else if(b==15)cout<<'F';
        else cout<<b;
    }
}
