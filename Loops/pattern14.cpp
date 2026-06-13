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
        // Left stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        // Spaces
        for (int col = 1; col <= 2 * (rows - row); col++)
        {
            cout << "  ";
        }

        // Right stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower half
    for (int row = rows; row >= 1; row--)
    {
        // Left stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        // Spaces
        for (int col = 1; col <= 2 * (rows - row); col++)
        {
            cout << "  ";
        }

        // Right stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}