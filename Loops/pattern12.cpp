#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }

        cout << endl;
    }
    return 0;
}