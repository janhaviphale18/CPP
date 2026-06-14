#include <iostream>
using namespace std;

// Function prototype
int add(int, int);

int main()
{
    int a, b, result;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    result = add(a, b);

    cout << "Sum = " << result << endl;

    return 0;
}

// Function definition
int add(int num1, int num2)
{
    return num1 + num2;
}