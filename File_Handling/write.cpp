#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("sample.txt");

    file << "Hello Janhavi" << endl;
    file << "Welcome to File Handling" << endl;

    cout << "Data written successfully" << endl;

    file.close();

    return 0;
}