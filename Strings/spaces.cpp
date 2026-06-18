#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int spaces = 0;
    cout << "Enter a sentence: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            spaces++;
        }
    }

    cout << "Total spaces = " << spaces << endl;
    return 0;
}