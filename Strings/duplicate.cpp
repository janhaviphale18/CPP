#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, result = "";
    bool duplicate;
    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        duplicate = false;

        for (int j = 0; result[j] != '\0'; j++)
        {
            if (text[i] == result[j])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
        {
            result = result + text[i];
        }
    }
    cout << "String after removing duplicates = " << result << endl;
    return 0;
}