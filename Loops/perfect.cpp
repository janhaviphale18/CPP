#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == number)
    {
        cout << "Perfect Number";
    }
    else
    {
        cout << "Not a Perfect Number";
    }

    return 0;
}