#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, sub;
    bool found = false;
    cout << "Enter main string: ";
    getline(cin, text);
    cout << "Enter substring: ";
    getline(cin, sub);

    for (int i = 0; i <= text.length() - sub.length(); i++)
    {
        int j;
        for (j = 0; j < sub.length(); j++)
        {
            if (text[i + j] != sub[j])
            {
                break;
            }
        }

        if (j == sub.length())
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "Substring found" << endl;
    }
    else
    {
        cout << "Substring not found" << endl;
    }
    return 0;
}