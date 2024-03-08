/*      Read a character from user and check if it is a valid hexadecimal digit or not. 
Hint: a char is a valid hexadecimal digit if it is one of these characters: ‘0’, ‘1’, ... , ‘9’, ‘a’, ’b’, ... , ’f’, ‘A’,’B’, ... ,’F’*/

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter hexadecimal digits: ";
    cin >> ch;
    if ((ch >= 48 and ch <= 57) or ((ch >= 97 and ch <= 102) or (ch >= 65 and ch <= 70)))
        cout << ch << ": valid" << endl;
    else
        cout << ch << ": Invalid" << endl;
    return 0;
}
