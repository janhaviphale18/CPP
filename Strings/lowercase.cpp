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
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + 32;
        }
    }
    cout << "Lowercase String = " << text << endl;
    return 0;
}