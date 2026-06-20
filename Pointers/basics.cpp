#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr: " << *ptr << endl;
    return 0; 
}