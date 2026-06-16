#include <iostream>
using namespace std;

float findArea(float radius)
{
    return 3.14 * radius * radius;
}
int main()
{
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of circle = " << findArea(radius) << endl;
    return 0;
}