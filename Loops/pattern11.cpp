#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = rows; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }

        cout << endl;
    }
    return 0;
}