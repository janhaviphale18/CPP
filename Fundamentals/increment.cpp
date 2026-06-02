#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    cout << "Initial Value: " << number << endl;
    cout << endl;

    cout << "Pre Increment (++number): " << ++number << endl;
    cout << "Post Increment (number++): " << number++ << endl;
    cout << "Value After Post Increment: " << number << endl;
    cout << endl;

    cout << "Pre Decrement (--number): " << --number << endl;
    cout << "Post Decrement (number--): " << number-- << endl;
    cout << "Value After Post Decrement: " << number << endl;

    return 0;
}