/*
Try it yourself 1a:  Write a Cpp program to check whether an input alphabet is a 
vowel or a consonant (assume that the input is an English letter).
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << "Vowel: " << ch;
    else if (ch == 'q' || ch == 'w' || ch == 'r' || ch == 't' || ch == 'y' || ch == 'p' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm' || ch == 'Q' || ch == 'W' || ch == 'R' || ch == 'T' || ch == 'Y' || ch == 'P' || ch == 'S' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'Z' || ch == 'X' || ch == 'C' || ch == 'V' || ch == 'B' || ch == 'N' || ch == 'M')
        cout << "consunant";
    else
        cout << "Not Consunant and not vowel";

    return 0;
}
--------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    if (isalpha(ch))
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "Vowel: " << ch;
        else
            cout << "consunant";
    }
    else
        cout << "Not Consunant and not vowel";

    return 0;
}

