#include <iostream>
using namespace std;

void swap(int &num1 , int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Inside function after swapping: " << endl;
    cout << "Number1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;
}
int main()
{
    int a , b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "Before function call" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Call by Reference: original a and b are passed
    swap(a,b);

    cout << "After function call" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}