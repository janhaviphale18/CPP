#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;

    cout << "Original address = " << ptr << endl;

    ptr++;

    cout << "After increment = " << ptr << endl;

    ptr--;

    cout << "After decrement = " << ptr << endl;

    return 0;
}