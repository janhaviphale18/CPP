#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    for (int i = 0; text[i] != '\0'; i++)
    {
        cout << "Character at index " << i << " = " << text[i] << endl;
    }
    return 0;
}