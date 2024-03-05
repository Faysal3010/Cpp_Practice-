/*check odd and even */
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a & 1)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    return 0;
}
