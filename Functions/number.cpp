#include <iostream>
using namespace std;

int getNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}
int main()
{
    int result;
    result = getNumber();
    cout << "Result: " << result << endl;
    return 0;
}

