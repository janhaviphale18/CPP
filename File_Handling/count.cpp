#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("sample.txt");
    string line;
    int count = 0;

    while (getline(file, line))
    {
        count++;
    }

    cout << "Total lines = " << count << endl;

    file.close();

    return 0;
}