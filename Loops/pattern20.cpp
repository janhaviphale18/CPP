#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Upper half
    for (int row = 1; row <= rows; row++)
    {
        for (int space = 1; space <= rows - row; space++)
        {
            cout << "  ";
        }

        for (int col = 1; col <= (2 * row - 1); col++)
        {
            if (col == 1 || col == (2 * row - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    // Lower half
    for (int row = rows - 1; row >= 1; row--)
    {
        for (int space = 1; space <= rows - row; space++)
        {
            cout << "  ";
        }

        for (int col = 1; col <= (2 * row - 1); col++)
        {
            if (col == 1 || col == (2 * row - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
    return 0;
}