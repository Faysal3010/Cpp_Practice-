/*Write a C++ program to read an integer from user and count the total number of nonzero digits in it.*/
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    while (n)
    {
        if(n%10!=0)count++;
        n/=10;
    }
    cout<<count<<endl;
    return 0;
}
//-----------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
  int count = 0, num, digit;
  cout << "Enter number: ";
  cin >> num;
  while (num != 0)
  {
    digit = num % 10;
    if (digit != 0)
    {
      count++;
    }
    num /= 10;
  }
  cout <<"Total Non-zero number: "<< count;
  return 0;
}
