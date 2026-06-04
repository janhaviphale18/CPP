#include <iostream>
using namespace std;
int main()
{
    int firstNumber , secondNumber;
    cout << "Enter the first number: ";
    cin >> firstNumber ;
    cout << "Enter the second number: ";
    cin >> secondNumber ;
    
    cout << "Minimum number: " << min(firstNumber , secondNumber) << endl;
    cout << "Maximum number: " << max(firstNumber , secondNumber) << endl;
    return 0;
}