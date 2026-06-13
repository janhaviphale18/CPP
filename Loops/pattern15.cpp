#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        // Print spaces
        for (int space = 1; space <= rows - row; space++)
        {
            cout << "  ";
        }

        // Print stars
        for (int col = 1; col <= (2 * row - 1); col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}