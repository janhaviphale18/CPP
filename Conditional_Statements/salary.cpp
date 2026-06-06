#include <iostream>
using namespace std;

int main()
{
    double salary, bonus, totalSalary;

    cout << "Enter employee salary: ";
    cin >> salary;

    if (salary < 0)
    {
        cout << "Invalid salary entered.";
    }
    else if (salary >= 50000)
    {
        bonus = salary * 0.20;
        totalSalary = salary + bonus;

        cout << "Salary: Rs. " << salary << endl;
        cout << "Bonus: Rs. " << bonus << endl;
        cout << "Total Salary: Rs. " << totalSalary;
    }
    else if (salary >= 30000)
    {
        bonus = salary * 0.10;
        totalSalary = salary + bonus;

        cout << "Salary: Rs. " << salary << endl;
        cout << "Bonus: Rs. " << bonus << endl;
        cout << "Total Salary: Rs. " << totalSalary;
    }
    else
    {
        bonus = salary * 0.05;
        totalSalary = salary + bonus;

        cout << "Salary: Rs. " << salary << endl;
        cout << "Bonus: Rs. " << bonus << endl;
        cout << "Total Salary: Rs. " << totalSalary;
    }

    return 0;
}