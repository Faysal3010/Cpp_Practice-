/* C Program to demonstrate the usage of assignment and increment operators:  */

#include <iostream>
using namespace std;
int main()
{
     char a;
     cout << "Enter lowerCase: ";
     cin >> a;
     cout << (a -= 32) << endl;
     cout << ++a<<endl;
     cout << ++a<<endl;
     return 0;
}
