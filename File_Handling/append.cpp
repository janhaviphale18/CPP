#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("sample.txt", ios::app);

    file << "This is appended data" << endl;

    cout << "Data appended successfully" << endl;

    file.close();

    return 0;
}