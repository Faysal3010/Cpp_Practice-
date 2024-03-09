/*
Write a C program that reads the first letter of direction (North, South, East, West), current (x,y) coordinate, and 
advancement of a person and prints the new coordinate. For e.g., if the current coordinate of a person in X- Y plane is (2,3) and
 s/he advances 6 units towards North, then his/her new coordinate is (2,3+6)=(2,9). 
Sample input/output (bold ones are user inputs):

Enter current coordinate (x and y positions): 2 3
Enter No. units towards direction: 6
Enter Direction: N
New coordinate: (2,9)
*/
#include <iostream>
using namespace std;
int main()
{
    int x, y, toward;
    char direction;
    cout << "\nEnter current coordinate (x and y positions): ";
    cin >> x >> y;
    cout << "Enter No. units towards direction: ";
    cin >> toward;
    cout << "Enter the first letter of direction (North, South, East, West): ";
    cin >> direction;
    direction = tolower(direction);
    switch (direction)
    {
    case 'e':
        cout << "New coordinate: " << '(' << x + toward << ',' << y << ")\n"
             << endl;
        break;
    case 'w':
        cout << "New coordinate: " << '(' << x - toward << ',' << y << ")\n"
             << endl;
        break;
    case 'n':
        cout << "New coordinate: " << '(' << x << ',' << y + toward << ")\n"
             << endl;
        break;
    case 's':
        cout << "New coordinate: " << '(' << x << ',' << y - toward << ")\n"
             << endl;
        break;
    default:
        cout << "invalid direction: " << direction << "\n"
             << endl;
    }
    return 0;
}
