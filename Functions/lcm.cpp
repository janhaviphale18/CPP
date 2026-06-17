#include <iostream>
using namespace std;

int lcm (int num1 , int num2)
{
    int max;
    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    while (true)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            return max;
        }
        max++;
    }
}
int main()
{
    int a , b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "LCM : " << lcm (a,b) << endl;
    return 0;
}