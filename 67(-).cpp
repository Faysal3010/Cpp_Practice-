/*
Write a program to display all the letters of the alphabet (a-z). 
Use two for loops: the 1st one will print all letters in small letters and the 2nd one will print them in capital letters.
Example output:        a b c d e ……… z
                       A B C D ……… Z
*/
#include <iostream>
using namespace std;
int main()
{
     cout << "Output: ";
     for (int i = 97; i <= 122; i++)
     {
          cout <<" "<<(char)i;
     }
     cout << "\n\t";
     for (int i = 97-32; i <= 122-32; i++)
     {
          cout <<" "<<(char)i;
     }
     return 0;
}
