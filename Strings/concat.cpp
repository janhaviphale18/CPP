#include <iostream>
#include <string>
using namespace std;

int main()
{
    string city , state , country;
    cout << "Enter City: ";
    getline (cin , city);
    cout << "Enter State: ";
    getline (cin , state);
    cout << "Enter Country: ";
    getline (cin , country);

    string address = city + ", " + state + ", " + country;
    cout << "Address: " << address << endl;
    return 0;
}