#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    bool found = false;
    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        int count = 0;

        for (int j = 0; text[j] != '\0'; j++)
        {
            if (text[i] == text[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << "First non-repeating character = " << text[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "No non-repeating character found" << endl;
    }
    return 0;
}