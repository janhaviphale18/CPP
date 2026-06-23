#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num = 100;

    ofstream outFile("data.dat", ios::binary);
    outFile.write((char*)&num, sizeof(num));
    outFile.close();

    int readNum;

    ifstream inFile("data.dat", ios::binary);
    inFile.read((char*)&readNum, sizeof(readNum));
    inFile.close();

    cout << "Read value = " << readNum << endl;

    return 0;
}