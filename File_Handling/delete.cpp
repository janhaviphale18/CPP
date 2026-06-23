#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    if (remove("sample.txt") == 0)
    {
        cout << "File deleted successfully" << endl;
    }
    else
    {
        cout << "File deletion failed" << endl;
    }

    return 0;
}