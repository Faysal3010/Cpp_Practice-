/*
Write a C++ program that reads the semester no. of a student and
print a comment about student based on the table below. Use if - else if - else.

Semester No.        Comment
 0                           Invalid Semester
 1-3                         Freshman
 4-6                         Sophomore
 7-9                         Junior
 10-12                       Senior
 >12                         You must graduate soon

*/
#include <iostream>
using namespace std;
int main()
{
    int semester;
    cout << "Enter semester: ";
    cin >> semester;
    if (semester == 0)
        cout << "Comment: Invalid Semester";
    else if (semester >= 1 && semester <= 3)
        cout << "Comment: Freshman";
    else if (semester >= 4 && semester <= 6)
        cout << "Comment: Sophomore";
    else if (semester >= 7 && semester <= 9)
        cout << "Comment: Junior";
    else if (semester >= 10 && semester <= 12)
        cout << "Comment: Senior";
    else
        cout << "Comment: You must graduate soon";
    return 0;
}
