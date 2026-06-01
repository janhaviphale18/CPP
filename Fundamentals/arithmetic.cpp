#include <iostream>     
using namespace std;    
int main()
{
    int firstNumber = 20;
    int secondNumber = 10;

    int addition = firstNumber + secondNumber;
    int subtraction = firstNumber - secondNumber;
    int multiplication = firstNumber * secondNumber;
    int division = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;

    cout << "First Number = " << firstNumber<< endl;
    cout << "Second Number = " << secondNumber << endl;
    cout << endl;
    cout << "Addition = " << addition << endl;
    cout << "Subtraction = " << subtraction << endl;
    cout << "Multiplication = " << multiplication << endl;
    cout << "Division = " << division << endl;
    cout << "Remainder = " << remainder << endl;

    return 0;
}