#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 100;
    cout << "Value before delete = " << *ptr << endl;
    delete ptr;
    ptr = NULL;
    cout << "Memory deleted successfully" << endl;
    return 0;
}