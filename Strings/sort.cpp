#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    char temp;
    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        for (int j = i + 1; text[j] != '\0'; j++)
        {
            if (text[i] > text[j])
            {
                temp = text[i];
                text[i] = text[j];
                text[j] = temp;
            }
        }
    }
    cout << "Sorted string = " << text << endl;
    return 0;
}