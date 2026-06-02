#include <iostream>
using namespace std;

int main()
{
    int length;
    int breadth;
    int area;

    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;
    area = length * breadth;
    cout << endl;
    cout << "Area of Rectangle: " << area << endl;

    return 0;
}