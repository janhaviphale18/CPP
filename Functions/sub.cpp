#include <iostream>
using namespace std;

int sub (int num1 , int num2)
{
    int diff = num1 - num2;
    return diff;
}
int main()
{
    int a , b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int result;
    result = sub (a,b);
    cout << "Difference: " << result << endl;
    return 0;
}