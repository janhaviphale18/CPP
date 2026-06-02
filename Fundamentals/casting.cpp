#include <iostream>
using namespace std;

int main()
{
    float decimalNumber = 10.75;
    int integerNumber = (int)decimalNumber;

    cout << "Original Float Value: " << decimalNumber << endl;
    cout << "After Type Casting to Integer: " << integerNumber << endl;
    cout << endl;

    int number = 25;
    float convertedNumber = (float)number;

    cout << "Original Integer Value: " << number << endl;
    cout << "After Type Casting to Float: " << convertedNumber << endl;

    return 0;
}