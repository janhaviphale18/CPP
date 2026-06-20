#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    int *ptr = &age;
    cout << "Age: " << age << endl;
    cout << "Address of Age: " << &age << endl;
    cout << "Value stored in pointer: " << *ptr << endl;
    cout << "Address of pointer: " << ptr << endl;
    return 0;
}