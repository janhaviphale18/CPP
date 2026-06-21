#include <iostream>
using namespace std;

void display(int *ptr)
{
    cout << "Value: " << *ptr << endl;
}

int main()
{
    int num = 25;
    display (&num);
    return 0;
}