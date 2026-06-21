#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 500;
    
    cout << "Before delete = " << *ptr << endl;

    delete ptr;

    // ptr still holds old address (dangling pointer)

    cout << "Pointer is now dangling" << endl;

    ptr = NULL;

    cout << "Pointer made safe with NULL" << endl;

    return 0;

}