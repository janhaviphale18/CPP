#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string password1 , password2;
    cout << "Enter Password: ";
    getline(cin , password1);
    cout << "Re-enter Password: ";
    getline(cin , password2);
    if (password1 == password2)
    {
        cout << "Passwords Match" << endl;
    }
    else
    {
        cout << "Passwords do not match" << endl;
    }
    return 0;
}
