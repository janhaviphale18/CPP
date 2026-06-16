#include <iostream>
using namespace std;

int reverseNumber (int num)
{
    int digit;
    int reverse = 0;
    while (num != 0)
    {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
    return reverse;
}
int main ()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Reversed number = " << reverseNumber(number) << endl;
    return 0;
}