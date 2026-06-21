#include <iostream>
using namespace std;

void swap(int *ptr1 , int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int a = 5 , b = 10;
    cout << "Before Swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap (&a , &b);

    cout << "After Swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}