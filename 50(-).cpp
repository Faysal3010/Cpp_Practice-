/*1. Cpp Program to check whether the input is a character, digit or a special character.*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter anything: ";
    char c;
    cin >> c;
    if (c >= '0' && c <= '9')
        cout << "Digit: " << c;
    else if (c >= 'a' && c <= 'z' or c >= 'A' and c <= 'Z')
        cout << "Alpha: " << c;
    else
        cout << "Special characters: " << c;
    return 0;
}
//---------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if(ch>=48 && ch<=57)cout<<"digit : "<<ch<<endl;
    else if(ch>=97 && ch<=122 or ch>=65 && ch<=90)cout<<"charactor : "<<ch<<endl;
    else cout<<"sp : "<<ch<<endl;
    return 0;
}
