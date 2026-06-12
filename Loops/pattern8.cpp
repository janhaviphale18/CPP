#include <iostream>
using namespace std;
int main()
{
    int rows;
    char ch = 'A';
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
    return 0;
}