#include <iostream>
using namespace std;
int main()
{
    int age = 18;
    float percentage = 89.5;
    double pi = 3.141592;
    char grade = 'A';
    bool passed = true;

    cout << "Size of int: " << sizeof(age) << " bytes" << endl;
    cout << "Size of float: " << sizeof(percentage) << " bytes" << endl;
    cout << "Size of double: " << sizeof(pi) << " bytes" << endl;
    cout << "Size of char: " << sizeof(grade) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(passed) << " bytes" << endl;
    cout << endl;

    cout << "Size of int datatype: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float datatype: " << sizeof(float) << " bytes" << endl;

    return 0;
}