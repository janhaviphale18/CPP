#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        char ch = 'A';

        for (int col = 1; col <= row; col++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
    return 0;
}