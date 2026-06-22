#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("sample.txt");
    string line, word;
    bool found = false;

    cout << "Enter word to search: ";
    cin >> word;

    while (getline(file, line))
    {
        if (line.find(word) != string::npos)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Word found in file" << endl;
    }
    else
    {
        cout << "Word not found in file" << endl;
    }

    file.close();

    return 0;
}