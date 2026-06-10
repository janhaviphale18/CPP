#include <iostream>
using namespace std;
int main()
{
    int number, originalNumber;
    int digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    while (number != 0)
    {
        digit = number % 10;

        int factorial = 1;

        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        number = number / 10;
    }

    if (sum == originalNumber)
    {
        cout << "Strong Number";
    }
    else
    {
        cout << "Not a Strong Number";
    }

    return 0;
}