#include <iostream>
using namespace std;

void fibonacci(int terms)
{
    int first = 0;
    int second = 1;
    int next;

    for (int i = 1; i <= terms; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
}
int main()
{
    int number;
    cout << "Enter number of terms: ";
    cin >> number;
    fibonacci(number);
    return 0;
}