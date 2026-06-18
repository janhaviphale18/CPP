#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int uppercase = 0, lowercase = 0;
    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            uppercase++;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            lowercase++;
        }
    }
    cout << "Uppercase letters = " << uppercase << endl;
    cout << "Lowercase letters = " << lowercase << endl;
    return 0;
}