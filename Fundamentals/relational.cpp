#include <iostream>     
using namespace std;    
int main()
{
    int firstNumber = 20;
    int secondNumber = 10;

    cout << "First Number = " << firstNumber << endl;
    cout << "Second Number = " << secondNumber << endl;
    cout << endl;

    cout << "Greater Than (>) : " << (firstNumber > secondNumber) << endl;
    cout << "Less Than (<) : " << (firstNumber < secondNumber) << endl;
    cout << "Equal To (==) : " << (firstNumber == secondNumber) << endl;
    cout << "Not Equal To (!=) : " << (firstNumber != secondNumber) << endl;
    cout << "Greater Than or Equal To (>=) : " << (firstNumber >= secondNumber) << endl;
    cout << "Less Than or Equal To (<=) : " << (firstNumber <= secondNumber)<< endl;
    return 0;
}