#include <iostream>
using namespace std;

void largest (int num1 , int num2 , int num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " is greater than " << num2 << " and " << num3 << endl;
    }
    else if (num2 >= num3)
    {
        
        cout << num2 << " is greater than " << num1 << " and " << num3 << endl;
    }
    else
    {
        cout << num3 << " is greater than " << num1 << " and " << num2 << endl;
    }
}
int main ()
{
    int number1 , number2 , number3;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third number: ";
    cin >> number3;
    largest (number1 , number2 , number3);
    return 0;
}