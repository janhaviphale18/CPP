#include <iostream>
using namespace std;

int main()
{
    int units;
    double bill;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units < 0)
    {
        cout << "Invalid units entered.";
    }
    else if (units <= 100)
    {
        bill = units * 5;
        cout << "Electricity Bill: Rs. " << bill;
    }
    else if (units <= 200)
    {
        bill = units * 7;
        cout << "Electricity Bill: Rs. " << bill;
    }
    else
    {
        bill = units * 10;
        cout << "Electricity Bill: Rs. " << bill;
    }

    return 0;
}