#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;

    cout << "Enter first side: ";
    cin >> side1;

    cout << "Enter second side: ";
    cin >> side2;

    cout << "Enter third side: ";
    cin >> side3;

    if (side1 + side2 > side3 &&
        side1 + side3 > side2 &&
        side2 + side3 > side1)
    {
        if (side1 == side2 && side2 == side3)
        {
            cout << "Equilateral Triangle";
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            cout << "Isosceles Triangle";
        }
        else
        {
            cout << "Scalene Triangle";
        }
    }
    else
    {
        cout << "Invalid Triangle";
    }

    return 0;
}