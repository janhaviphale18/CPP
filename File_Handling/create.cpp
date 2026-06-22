#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("sample.txt");

    if (file)
    {
        cout << "File created successfully" << endl;
    }
    else
    {
        cout << "File creation failed" << endl;
    }

    file.close();

    return 0;
}