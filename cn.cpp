#include <iostream>
using namespace std;
int main()
{
    float totalSalary = 0;
    float basic = 0;
    float hra = 0;
    float da = 0;
    float allow = 0;
    float pf = 0;
    char grade;

    cout << "Enter the basic" << endl;
    cin >> basic;

    hra = ((20 * basic) / 100);

    cout << "hra is : " << hra<<endl;
  
    da = ((50 * basic) / 100);
    cout << "da is : " << da<<endl;

    cout << "Grade : "<<endl;
    cin >> grade;

    if (grade == 'A' && grade == 'a')
    {
        allow = 1700;
    }
    else if (grade == 'B' && grade == 'b')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }

    pf = ((11 * basic) / 100);
    cout << "Pf is : " << pf<<endl;

    cout << "Total Salary is : " << basic + hra + da + allow - pf<<endl;
}
