/*
Semester No.              Comment
 0                           Invalid Semester
 1-3                         Freshman
 4-6                         Sophomore
 7-9                         Junior
 10-12                       Senior
 >12                         You must graduate soon

 Solve the above problem using switch-case.
*/

#include <iostream>
using namespace std;
int main()
{
    int semester;
    cout << "Enter semester: ";
    cin >> semester;
    switch (semester)
    {
        {
        case 0:
            cout << "Comment: Invalid Semester";
            break;
        case 1 ... 3:
            cout << "Comment: Freshman";
            break;
        case 4 ... 6:
            cout << "Comment: Sophomore";
            break;
        case 7 ... 9:
            cout << "Comment: Junior";
            break;
        case 10 ... 12:
            cout << "Comment: Senior";
            break;
        default:
            cout << "Comment: You must graduate soon";
        }
        return 0;
    }
}
