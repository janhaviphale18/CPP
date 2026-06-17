#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int count = 0;
    cout << "Enter string: ";
    getline (cin , text);
    // Can also use: text.length()
    for (int i = 0 ; text[i] != '\0' ; i++)
    {
        count++;
    }
    cout << "Length Of String: " << count << endl;
    return 0;
}