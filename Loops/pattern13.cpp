#include <iostream>
using namespace std;
int main()
{
    int rows;
    int num = 1;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
    return 0;
}