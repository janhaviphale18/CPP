#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        // Print leading spaces
        for (int space = 1; space <= rows - row; space++)
        {
            cout << "  ";
        }

        // Print stars and inner spaces
        for (int col = 1; col <= (2 * row - 1); col++)
        {
            if (col == 1 || col == (2 * row - 1) || row == rows)
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