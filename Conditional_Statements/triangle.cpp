#include <iostream>
using namespace std;

int main()
{
    int angle1, angle2, angle3;

    cout << "Enter first angle: ";
    cin >> angle1;

    cout << "Enter second angle: ";
    cin >> angle2;

    cout << "Enter third angle: ";
    cin >> angle3;

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 &&
        angle1 + angle2 + angle3 == 180)
    {
        cout << "Valid Triangle";
    }
    else
    {
        cout << "Invalid Triangle";
    }

    return 0;
}