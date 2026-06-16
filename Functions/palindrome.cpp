#include <iostream>
using namespace std;

void isPalindrome (int num)
{
    int originalNumber = num;
    int digit;
    int reverse = 0;
    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (reverse == originalNumber)
    {
        cout << originalNumber << " is a palindrome number " << endl;
    }
    else
    {
        cout << originalNumber << " is not a palindrome number " << endl;
    }
}
int main ()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    isPalindrome(number);
    return 0;
}