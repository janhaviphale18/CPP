#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}