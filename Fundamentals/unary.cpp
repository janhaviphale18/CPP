#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    
    cout << "The Original Number is: " << number << endl;
    cout << "The Positive Number is: " << +number << endl;
    cout << "The Negative Number is: " << -number << endl;

    return 0;
}