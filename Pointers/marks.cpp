#include <iostream>
using namespace std;

int main()
{
    int marks = 82;
    int *ptr = &marks;
    cout << "Marks using variable: " << marks << endl;
    cout << "Marks using pointer: " << *ptr << endl;
    return 0;
}