#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    cout << "Initial Value: " << number << endl;
    
    number = 20;
    cout << "After = : " << number << endl;

    number += 5;
    cout << "After += : " << number << endl;
   
    number -= 3;
    cout << "After -= : " << number << endl;

    number *= 2;
    cout << "After *= : " << number << endl;

    number /= 4;
    cout << "After /= : " << number << endl;

    number %= 3;
    cout << "After %= : " << number << endl;

    return 0;
}