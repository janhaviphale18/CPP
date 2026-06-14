#include <iostream>
using namespace std;

void add (int num1 , int num2)
{
    cout << "Sum: " << num1 + num2 << endl;
}
int main()
{
    int a , b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    add(a,b);
    return 0;
}