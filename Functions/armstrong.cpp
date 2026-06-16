#include <iostream>
using namespace std;

bool isArmstrong (int num)
{
    int originalNumber = num;
    int digit;
    int sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    if (sum == originalNumber)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main ()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isArmstrong(number))
    {
        cout << number << " is an Armstrong Number " << endl;
    }
    else
    {
        cout << number << " is not an Armstrong Number " << endl;
    }
    return 0;
}
