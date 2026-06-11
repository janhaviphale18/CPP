#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int hcf = 1;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int limit;

    if (num1 < num2)
    {
        limit = num1;
    }
    else
    {
        limit = num2;
    }

    for (int i = 1; i <= limit; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF = " << hcf;

    return 0;
}