#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length())
    {
        cout << "Strings are not anagrams" << endl;
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = '*';
                break;
            }
        }
    }

    bool isAnagram = true;

    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != '*')
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
    {
        cout << "Strings are anagrams" << endl;
    }
    else
    {
        cout << "Strings are not anagrams" << endl;
    }
    return 0;
}