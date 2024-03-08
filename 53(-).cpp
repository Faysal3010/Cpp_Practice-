/*Try it yourself 2: Write a C program to check whether an input alphabet is a 
vowel or a consonant using switch case (assume that the input is an English letter).*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a alphabet: ";
    cin >> ch;
    if (isalpha(ch))
    {
        ch = tolower(ch);
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
            break;
        }
    }
    else
    {
        cout << "invalid input" << endl;
    }
    return 0;
}
