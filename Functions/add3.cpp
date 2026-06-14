#include <iostream>
using namespace std;

int addThreeNumbers (int num1 , int num2 , int num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}
int main()
{
    int a , b , c , result;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    result = addThreeNumbers (a,b,c);
    cout << "Sum: " << result << endl;
    return 0;
}