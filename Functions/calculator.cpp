#include <iostream>
using namespace std;

int add (int num1 , int num2)
{
    return num1 + num2;
}
int sub (int num1 , int num2)
{
    return num1 - num2;
}
int mul (int num1 , int num2)
{
    return num1 * num2;
}
float divide (int num1 , int num2)
{
    return num1 / num2;
}
int main ()
{
    int a , b , choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter Choice: ";
    cin >> choice;

    cout << "\nEnter Your Choice" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    switch (choice)
    {
        case 1:
            cout << "Sum: " << add(a,b) << endl;
            break;
        case 2:
            cout << "Difference: " << sub(a,b) << endl;
            break;
        case 3:
            cout << "Product: " << mul(a,b) << endl;
            break;
        case 4:
            if (a != 0)
            {
                cout << "Result = " << divide(a, b) << endl;
            }
            else
            {
                cout << "Division by zero is not possible." << endl;
            }
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
    }
    return 0;
}