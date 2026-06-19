#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, word = "", smallestWord = "";
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
            if (smallestWord == "" || word.length() < smallestWord.length())
            {
                smallestWord = word;
            }
            word = "";
        }
    }
    cout << "Smallest word = " << smallestWord << endl;
    return 0;
}