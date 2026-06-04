#include <iostream>
using namespace std;
int main ()
{
    int firstNumber, secondNumber;
    cout << "Enter the first number: ";
    cin >> firstNumber; 
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << "Integer Division: " << firstNumber/secondNumber << endl;
    cout << "Floating Point Division: " << (float)firstNumber/secondNumber << endl;
    cout << "Modulus: " << firstNumber % secondNumber << endl;
    return 0;
}