#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number<< endl;
    return 0;
}