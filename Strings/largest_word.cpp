#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, word = "", largestWord = "";
    cout << "Enter a sentence: ";
    getline(cin, text);

    for (int i = 0; i <= text.length(); i++)
    {
        if (text[i] != ' ' && text[i] != '\0')
        {
            word = word + text[i];
        }
        else
        {
            if (word.length() > largestWord.length())
            {
                largestWord = word;
            }
            word = "";
        }
    }
    cout << "Largest word = " << largestWord << endl;
    return 0;
}