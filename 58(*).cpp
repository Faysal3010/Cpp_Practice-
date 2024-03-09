/*
Farhan must pay a bill to a shopkeeper. The shopkeeper doesn’t have any change, so Farhan
must have all the notes required to pay the bill.
Write a C program that reads the bill and the number of each type of note (500, 100, 50, 20, 10, 5, 2, 1) from user
and then output whether it is possible for Farhan to pay the bill or not. 
If it is possible, then also output the number of each notes required to pay the bill.
Tentative Input/Output (bold ones are user inputs):
Enter amount: 1175 
Enter number of notes: 
500: 1
100: 7 
50: 1
20: 0
10: 5
5: 1
2: 0
1: 0
Farhan can pay the bill by using the following counts of different notes:
500: 1
100: 6 
50: 1
20: 0
10: 2
5: 1
2: 0
1: 0
*/

#include <iostream>
using namespace std;
int main()
{
    int billAmount;
    cout << "\nEnter the bill amount: ";
    cin >> billAmount;
    int notes[8] = {500, 100, 50, 20, 10, 5, 2, 1};
    int notesCount[8];
    for (int i = 0; i < 8; i++)
    {
        cout << notes[i] << " : ";
        cin >> notesCount[i];
    }
    cout << "-------------------------------------------------------------" << endl;
    int totalAmount = 0;
    for (int i = 0; i < 8; i++)
    {
        totalAmount += notes[i] * notesCount[i];
    }
    if (totalAmount < billAmount)
        cout << "Not pay this bill !!";
    else
    {

        for (int i = 0; i < 8; i++)
        {
            if (notesCount[i] > 0)
            {
                int count = min(notesCount[i], billAmount / notes[i]);
                cout << notes[i] << " : " << count << endl;
                billAmount -= count * notes[i];
            }
        }
        if (billAmount != 0)
            cout
                << "Remained bill amount: " << billAmount << "\nFarhan not pay remained bill\n" << endl;
        else
            cout << "Farhan can pay the bill by using the following counts of different notes\n" << endl;
    }
    return 0;
}
