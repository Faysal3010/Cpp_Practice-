/*Write a C++ program to read an integer from user and count the total number of digits in it.*/
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    while (n)
    {
        n /= 10;
        count++;
    }
    cout << count << endl;
    return 0;
}

//-----------------------------------------------

#include <iostream>
using namespace std;
int main()
{
  int i, count = 0, num;
  cout << "Enter n: ";
  cin >> num;
  if (num == 0)
  {
    cout << "The total number of digits: " << num;
    return 0;
  }
  for (i = 0; i != num;)
  {
    num /= 10;
    count++;
  }
  cout << "Number of digits: " << count << endl;
  return 0;
}
//--------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
  int count = 0, num;
  cout << "Enter n: ";
  cin >> num;
  if (num == 0)
  {
    cout << "The total number of digits: " << num;
    return 0;
  }
  while (num != 0)
  {
    num /= 10;
    count++;
  }
  cout << "Number of digits: " << count << endl;
  return 0;
}
