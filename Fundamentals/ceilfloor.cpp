#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Ceiled Number: " << ceil(number) << endl;
    cout << "Floored Number: " << floor(number) << endl;
    cout << "Rounded Number: " << round(number) << endl;
    return 0;
}