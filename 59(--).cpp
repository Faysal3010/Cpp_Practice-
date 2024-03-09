/*
Write C++ Program to calculate the tax from salary using the following table. 
The formula for tax is: tax = (base tax) + (percentage of excess)*(salary – min. salary in the salary range). 
For e.g., if the salary is 32000, then tax=5400+(22/100)*(32000-30000) = 5400+440=5840.
*/

#include <iostream>
using namespace std;
int main()
{
    int salary, base_tax, percentageOfExcess, mim_salaryRange;
    cout << "Enter salary: ";
    cin >> salary;
    if (salary >= 0 && salary <= 14999.99)cout << "tax " << 0 + (15. / 100) * (salary - 0);
    else if (salary >= 15000 && salary <= 29999.99)cout << "tax " << 2250 + (18. / 100) * (salary - 15000);
    else if (salary >= 30000 && salary <= 49999.99)cout << "tax " << 5400 + (22. / 100) * (salary - 30000);
    else if (salary >= 50000 && salary <= 79999.99)cout << "tax " << 11000 + (27. / 100) * (salary - 50000);
    else if (salary >= 80000 && salary <= 150000)cout << "tax " << 21600 + (33. / 100) * (salary - 80000);
    return 0;
}
