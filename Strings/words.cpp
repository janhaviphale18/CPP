#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int words = 1;
    cout << "Enter a sentence: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    cout << "Total words = " << words << endl;
    return 0;
}