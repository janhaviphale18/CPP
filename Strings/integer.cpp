#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    string text = "";
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        int digit = number % 10;
        text = char(digit + '0') + text;
        number = number / 10;
    }
    cout << "String value = " << text << endl;
    return 0;
}