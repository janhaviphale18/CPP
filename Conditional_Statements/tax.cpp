#include <iostream>
using namespace std;
int main()
{
    double income , tax , netIncome;
    cout << "Enter your income: ";
    cin >> income;
    if ( income < 0 )
    {
        cout << "Invalid income amount." << endl;
    }
    else if ( income <= 250000 )
    {
        tax = 0;
        netIncome = income;
    }
    else if ( income <= 500000 )
    {
        tax = 0.05 * income;
        netIncome = income - tax;
    }
    else if ( income <= 1000000 )
    {
        tax = 0.2 * income;
        netIncome = income - tax;
    }
    else
    {
        tax = 0.3 * income;
        netIncome = income - tax;
    }
    if ( income >= 0)
    {
        cout << "Annual Income: Rs. " << income << endl;
        cout << "Tax Amount: Rs. " << tax << endl;
        cout << "Income After Tax: Rs. " << netIncome;
    }
    return 0;
}
