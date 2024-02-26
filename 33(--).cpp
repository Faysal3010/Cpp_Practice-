/*
Write a C++ program to count total number of notes in given amount.
Tentative Input/Output (bold ones are user inputs):
Enter amount: 1176 
Total number of notes: 
500: 2
100: 1 
50: 1
20: 1
10: 0
5: 1
2: 0
1: 1
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the amount: ";
  cin >> n;
  cout << "\nTotal number of notes: ";
  cout << "\n500: " << n / 500;
  cout << "\n100: " << (n % 500) / 100;
  cout << "\n50:  " << ((n % 500) % 100) / 50;
  cout << "\n20:  " << (((n % 500) % 100) % 50) / 20;
  cout << "\n10:  " << ((((n % 500) % 100) % 50) % 20) / 10;
  cout << "\n5:   " << (((((n % 500) % 100) % 50) % 20) % 10) / 5;
  cout << "\n2:   " << ((((((n % 500) % 100) % 50) % 20) % 10) % 5) / 2;
  cout << "\n1:   " << (((((((n % 500) % 100) % 50) % 20) % 10) % 5) % 2);
  return 0;
}

-------------------------------------------------------0--------------------------------------------------------


#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the amount: ";
  cin >> n;
  int note500 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
  while (n > 0)
  {
    if (n >= 500)
    {
      note500++;
      n -= 500;
    }
    else if (n >= 100)
    {
      note100++;
      n -= 100;
    }
    else if (n >= 50)
    {
      note50++;
      n -= 50;
    }
    else if (n >= 20)
    {
      note20++;
      n -= 20;
    }
    else if (n >= 10)
    {
      note10++;
      n -= 10;
    }
    else if (n >= 5)
    {
      note5++;
      n -= 5;
    }
    else if (n >= 2)
    {
      note2++;
      n -= 2;
    }
    else if (n >= 1)
    {
      note1++;
      n -= 1;
    }
  }
  cout << "\nTotal number of notes: ";
  cout << "\n500: " << note500;
  cout << "\n100: " << note100;
  cout << "\n50:  " << note50;
  cout << "\n20:  " << note20;
  cout << "\n10:  " << note10;
  cout << "\n5:   " << note5;
  cout << "\n2:   " << note2;
  cout << "\n1:   " << note1;
  return 0;
}
