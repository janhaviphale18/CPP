#include <iostream>
using namespace std;
int main()
{
    int num1, num2, maxNum, lcm;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    maxNum = (num1 > num2) ? num1 : num2;

    while (true)
    {
        if (maxNum % num1 == 0 && maxNum % num2 == 0)
        {
            lcm = maxNum;
            break;
        }

        maxNum++;
    }

    cout << "LCM = " << lcm;

    return 0;
}
