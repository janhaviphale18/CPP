#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream source("sample.txt");
    ofstream destination("copy.txt");

    string line;

    while (getline(source, line))
    {
        destination << line << endl;
    }

    cout << "File copied successfully" << endl;

    source.close();
    destination.close();

    return 0;
}