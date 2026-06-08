#include <iostream>
using namespace std;
int main()
{
    int vehicleType , hours;
    char vipMember;
    double rate , parkingFee , discount , finalFee;

    cout << "Select Vehicle Type" << endl;
    cout << "1. Car" << endl;
    cout << "2. Motorcycle" << endl;
    cout << "3. Truck" << endl;
    cout << "Enter Vehicle Type: ";
    cin >> vehicleType;
    cout << "Enter Parking Hours: " << endl;
    cin >> hours;
    cout << "Are you a VIP member? (Y/N): " << endl;
    cin >> vipMember;

    if ( hours<=0 )
    {
        cout << "Invalid Parking Hours" << endl;
        return 0;
    }
    if ( vehicleType == 1 )
    {
        rate = 20;
    }
    else if ( vehicleType == 2 )
    {
        rate = 50;
    }
    else if ( vehicleType == 3 )
    {
        rate = 100;
    }
    else
    {
        cout << "Invalid Vehicle Type" << endl;
        return 0;
    }
    parkingFee = rate * hours;

    if ( vipMember == 'Y' || vipMember == 'y' )
    {
        discount = parkingFee * 0.20;
    }
    else
    {
        discount = 0;
    }
    finalFee = parkingFee - discount;
    cout << endl;
    cout << "Parking Fee: Rs. " << parkingFee << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "Final Fee: Rs. " << finalFee << endl;

    return 0;
}