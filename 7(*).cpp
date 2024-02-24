/*
Ask user for two integers a and b. Then swap (interchange) the values of a and b. 
That means, a should get the value of b and b should get the value of a.
Enter a: 7
Enter b: 3
After swapping, a: 3 and b: 7
*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, temp;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  temp = a;
  a = b;
  b = temp;
  cout << "After swapping,\n"
       << " a: " << a << " and b: " << b << endl;
  return 0;
}


// without temporary....
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  a = a - b;
  b = a + b;
  a = b - a;
  cout << "After swapping,\n"
       << " a: " << a << " and b: " << b << endl;
  return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    a=a+b;
    b=a-b;
    a=-(b-a);
    cout<<a<<" "<<b<<endl;
    return 0;
}
