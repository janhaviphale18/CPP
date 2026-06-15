#include <iostream>
using namespace std;

int factorial (int num)
{
    int factorial = 1;
    for ( int i = 1 ; i <= num ; i++ )
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main ()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}