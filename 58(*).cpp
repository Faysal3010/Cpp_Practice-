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
    int billAmount, totalAmount = 0;
    cout << "Enter bill amount: ";
    cin >> billAmount;
    int note[] = {500, 100, 50, 20, 10, 5, 2, 1}, noteCount[8];
    for (int i = 0; i < 8; i++)
    {
        cout << note[i] << ": ";
        cin >> noteCount[i];
        totalAmount += noteCount[i] * note[i];
    }
    cout << "--------------------------------------------"<<endl;
    if (totalAmount < billAmount)
    {
        cout << "Not payable!!" << endl;
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            // if (noteCount[i] > 0)
            // {
                int count = min(noteCount[i], billAmount / note[i]);
                cout << note[i] << ": " << count << endl;
                billAmount -= count * note[i];
            // }
        }
        if (billAmount != 0)
            cout << "remain bill" << billAmount << endl;
        else
            cout << "success" << endl;
    }
    return 0;
}
