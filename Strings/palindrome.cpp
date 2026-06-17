#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string text , reverse = "";
    cout << "Enter a string: ";
    getline (cin , text);
    
    for (int i = text.length() - 1; i >= 0; i--)
    {
        reverse = reverse + text[i];
    }

    if (text == reverse)
    {
        cout << text << " is a palindrome string" << endl;
    }
    else
    {
        cout << text << " is not a palindrome string" << endl;
    }

    return 0;
}

