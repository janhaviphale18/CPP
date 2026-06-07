#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username;
    string password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;
    if ( username == "admin" && password == "12345")
    {
        cout << "Login successful!" << endl;
    }
    else if ( username == "admin" && password != "12345")
    {
        cout << "Incorrect password!" << endl;
    }
    else if ( username != "admin" && password == "12345")
    {
        cout << "Incorrect username!" << endl;
    }
    else 
    {
        cout << "Incorrect username and password!" << endl;
    }
    return 0;
}