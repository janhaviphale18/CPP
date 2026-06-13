#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
        {
            if (row == 1 || row == rows || col == 1 || col == rows)
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