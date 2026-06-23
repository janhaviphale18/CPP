#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file1("sample1.txt");
    ifstream file2("sample2.txt");
    ofstream merged("merged.txt");

    string line;

    while (getline(file1, line))
    {
        merged << line << endl;
    }

    while (getline(file2, line))
    {
        merged << line << endl;
    }

    cout << "Files merged successfully" << endl;

    file1.close();
    file2.close();
    merged.close();

    return 0;
}