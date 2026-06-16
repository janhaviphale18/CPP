#include <iostream>
using namespace std;

int findPower(int base, int exponent)
{
    int power = 1;
    for (int i = 1; i <= exponent; i++)
    {
        power = power * base;
    }
    return power;
}
int main()
{
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << "Result = " << findPower(base, exponent) << endl;
    return 0;
}