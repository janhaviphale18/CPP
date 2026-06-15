#include <iostream>
using namespace std;

string checkEvenOdd( int num )
{
    if (num % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}
int main ()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The number is " << checkEvenOdd(number) << endl;
    return 0;
}