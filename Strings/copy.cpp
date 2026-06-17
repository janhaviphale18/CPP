#include <iostream>
#include <string>
using namespace std;

int main()
{
    string original , copied;
    cout << "Enter string: ";
    getline (cin , original);
    copied = original;
    cout << "Copied string: " << copied << endl;
    return 0;
}