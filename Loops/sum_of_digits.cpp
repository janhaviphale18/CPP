#include <iostream>
using namespace std;
int main()
{
    int number , digit , sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    if ( number < 0 )
    {
        number = -number;
    }
    while ( number > 0 )
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    cout << "Sum of digits = " << sum;
    return 0;
}