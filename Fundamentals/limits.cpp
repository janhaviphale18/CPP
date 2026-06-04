#include <iostream>
#include <climits>
using namespace std;
int main()
{
    cout << "The limits of char: " << (int)CHAR_MIN << " to " << (int)CHAR_MAX << endl;
    cout << "The limits of int: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "The limits of long: " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "The limits of long long: " << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << "The limits of short: " << SHRT_MIN << " to " << SHRT_MAX << endl;  
    cout << "The maximum unsigned int value: " << UINT_MAX << endl;
    return 0;
}