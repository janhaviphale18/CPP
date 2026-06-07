#include <iostream>
using namespace std;

int main()
{
    int marks;
    double income;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter annual family income: ";
    cin >> income;

    if (marks < 0 || marks > 100 || income < 0)
    {
        cout << "Invalid input.";
    }
    else if (marks >= 90 && income < 300000)
    {
        cout << "Full Scholarship (100%)";
    }
    else if (marks >= 90 && income < 500000)
    {
        cout << "Merit Scholarship (75%)";
    }
    else if (marks >= 80 && income < 500000)
    {
        cout << "Partial Scholarship (50%)";
    }
    else if (marks >= 70 && income < 300000)
    {
        cout << "Financial Aid Scholarship (25%)";
    }
    else
    {
        cout << "No Scholarship";
    }

    return 0;
}