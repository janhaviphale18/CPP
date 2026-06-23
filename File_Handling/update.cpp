#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("sample.txt");
    ofstream temp("temp.txt");

    string line;

    while (getline(file, line))
    {
        if (line == "Hello Janhavi")
        {
            temp << "Hello World" << endl;
        }
        else
        {
            temp << line << endl;
        }
    }

    file.close();
    temp.close();

    remove("sample.txt");
    rename("temp.txt", "sample.txt");

    cout << "File updated successfully" << endl;

    return 0;
}