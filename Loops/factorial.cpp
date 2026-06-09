#include <iostream>
using namespace std;
int main()
{
    int number;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> number;
    if ( number < 0 )
    {
        cout << "Factorial is not defined for negative numbers";
    }
    else
    {
        for ( int i = 1 ; i <= number ; i++ )
        {
            factorial = factorial * i;
        }
        cout << "Factorial of " << number << " is " << factorial;
    }
    return 0;
}