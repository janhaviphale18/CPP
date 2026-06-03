#include <iostream>
using namespace std;
int main()
{
    int base;
    int height;
    int area;

    cout << "Enter Base of Triangle: ";
    cin >> base;
    cout << "Enter Height of Triangle: ";
    cin >> height;
    area = 0.5 * base * height;
    cout << endl;
    cout << "Area of Triangle: " << area << endl;

    return 0;
}