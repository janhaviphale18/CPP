#include <iostream>
using namespace std;
int main()
{
    int number , count = 0;
    cout << "Enter a number: ";
    cin >> number;
    if ( number == 0 )
    {
        count = 1;
    }
    else 
    {
        if ( number < 0 )
        {
            number = -number;
        } 
        while ( number > 0 )
        {
            count++;
            number = number/10;
        }
    }
    cout << "Number of digits = " << count;
return 0;
}