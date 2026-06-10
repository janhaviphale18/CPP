#include <iostream>
using namespace std;
int main()
{
    int start , end;
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;
    cout << "Prime Numbers: ";

    for (int num = start ; num <= end ; num++)
    {
        int count = 0;
        if (num <= 1)
        {
            continue;
        }
        for (int i = 1 ; i <= num ; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << num << " ";
        }
    }
    return 0;
}