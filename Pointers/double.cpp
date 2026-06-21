#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    int *ptr = &num;
    int **dptr = &ptr;

    cout << "Value using num: " << num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Value using double pointer: " << **dptr << endl;
    return 0;
}