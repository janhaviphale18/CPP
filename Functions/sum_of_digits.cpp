#include <iostream>
using namespace std;

int findSumOfDigits(int num)
{
    int digit;
    int sum = 0;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    return sum;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits = " << findSumOfDigits(number) << endl;
    return 0;
}