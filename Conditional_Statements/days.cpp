#include <iostream>
using namespace std;

int main()
{
    int month, year;

    cout << "Enter month number (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    if (month < 1 || month > 12)
    {
        cout << "Invalid month number.";
    }
    else if (month == 1 || month == 3 || month == 5 ||
             month == 7 || month == 8 || month == 10 ||
             month == 12)
    {
        cout << "31 days";
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11)
    {
        cout << "30 days";
    }
    else
    {
        if ((year % 400 == 0) ||
            (year % 4 == 0 && year % 100 != 0))
        {
            cout << "29 days";
        }
        else
        {
            cout << "28 days";
        }
    }

    return 0;
}