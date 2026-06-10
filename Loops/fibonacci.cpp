#include <iostream>
using namespace std;

int main()
{
    int terms;
    int first = 0;
    int second = 1;
    int next;

    cout << "Enter number of terms: ";
    cin >> terms;

    if (terms <= 0)
    {
        cout << "Invalid number of terms.";
    }
    else if (terms == 1)
    {
        cout << first;
    }
    else
    {
        cout << first << " " << second << " ";

        for (int i = 3; i <= terms; i++)
        {
            next = first + second;
            cout << next << " ";

            first = second;
            second = next;
        }
    }

    return 0;
}