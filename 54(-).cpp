/*
Write a C program that takes input the first letter of any of the following fruits name– 
Mango ---- Tk.500/kg, 
Apple   ---- Tk.250/kg, 
Banana ----Tk. 130/kg, 
Cherry -----Tk. 270/kg, and suggests the price of the fruit as output, using switch case.
*/
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Write a C program that takes input the first letter of any of the following fruits name–"
         << "\nMango-- --Tk .500 / kg,"
         << "\nApple-- --Tk .250 / kg,"
         << "\nBanana-- --Tk.130 / kg,"
         << "\nCherry-- -- -Tk.270 / kg "
         << "\nEnter the letter: ";
    cin >> ch;
    if (isalpha(ch))
    {
        ch = tolower(ch);
        switch (ch)
        {
        case 'm':
            cout << "Mango-- --Tk .500 / kg";
            break;
        case 'a':
            cout << "Apple-- --Tk .250 / kg";
            break;
        case 'b':
            cout << "Banana-- --Tk.130 / kg";
            break;
        case 'c':
            cout << "Cherry-- -- -Tk.270 / kg";
            break;

        default:
            cout << "Unknown";
            break;
        }
    }
    else
        cout << "invalid input" << endl;

    return 0;
}
