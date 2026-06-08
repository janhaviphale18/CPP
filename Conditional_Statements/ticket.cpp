#include <iostream>
using namespace std;
int main()
{
    int showType , customerType;
    double ticketPrice , discount , finalPrice;
    cout << "Select Show Type" << endl;
    cout << "1. Morning Show" << endl;
    cout << "2. Afternoon Show" << endl;
    cout << "3. Evening Show" << endl;
    cout << "Enter Choice: ";
    cin >> showType;

      if (showType == 1)
    {
        ticketPrice = 150;
    }
    else if (showType == 2)
    {
        ticketPrice = 200;
    }
    else if (showType == 3)
    {
        ticketPrice = 300;
    }
    else
    {
        cout << "Invalid show selection.";
        return 0;
    }

    cout << endl;

    cout << "Select Customer Type" << endl;
    cout << "1. Student" << endl;
    cout << "2. Regular" << endl;
    cout << "3. Senior Citizen" << endl;
    cout << "Enter Choice: ";   
    cin >> customerType;
    if ( customerType == 1)
    {
        discount = ticketPrice * 0.20;
        finalPrice = ticketPrice - discount;
    }
    else if (customerType == 2)
    {
        discount = ticketPrice * 0.10;
        finalPrice = ticketPrice - discount;
    }
    else if (customerType == 3)
    {
        discount = ticketPrice * 0.30;
        finalPrice = ticketPrice - discount;
    }
    else
    {
        cout << "Invalid customer type selection.";
        return 0;
    }

    cout << endl;
    cout << "Ticket Price: Rs. " << ticketPrice << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "Final Price: Rs. " << finalPrice << endl;
    return 0;
}