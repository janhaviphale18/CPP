#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    char oldChar, newChar;
    cout << "Enter a string: ";
    getline(cin, text);
    cout << "Enter character to replace: ";
    cin >> oldChar;
    cout << "Enter new character: ";
    cin >> newChar;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == oldChar)
        {
            text[i] = newChar;
        }
    }
    cout << "Updated string = " << text << endl;
    return 0;
}