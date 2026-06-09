#include <iostream>
using namespace std;
int main()
{
    int number, originalNumber, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    while (number != 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    if (sum == originalNumber)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }
return 0;
}